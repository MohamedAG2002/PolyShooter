#include "../../header/Entities/Player.h"
#include "../../header/Entities/Bullet.h"
#include "../../header/Constants.h"
#include "../../header/Utls.h"
#include "../../header/Managers/AssetManager.h"
#include "../../header/Managers/EventManager.h"

#include <SDL2/SDL.h>

#include <string>
#include <memory>

namespace ps { // beginning of ps

Player::Player()
{
  // Inherited members
  position = Vec2(consts::SCREEN_WIDTH / 2.0f - PLYR_SPRITE_SIZE / 2.0f, 
                  consts::SCREEN_HEIGHT);
  id = "Player";
  isActive = true;

  // Own members
  velocity = Vec2(0.0f, PLYR_SPEED.y);
  size = Vec2(32.0f, 32.0f);
  initialPosition = position; // Recording the original position for later use
  health = PLYR_MAX_HEALTH;
  texture = AssetManager::Get().GetSprite("Player");
  rect = {position.x, position.y, size.x, size.y};

  m_cooldownTimer.Start();
  m_canShoot = true;

  // Lambda implementation
  m_collCallback = [&](EventType et) {
    health -= 1;
  };

  // Listening to events
  EventManager::Get().ListenToCollisionEvent(EventType::PLAYER_COLLISION, m_collCallback);
} 

void Player::ProcessInput(SDL_Event event)
{
  // Only allow inputs once the player is in position
  if(position.y > (consts::SCREEN_HEIGHT - 64.0f))
    return;

  switch(event.type)
  {
    case SDL_KEYDOWN:
      if(event.key.keysym.sym == SDLK_SPACE && m_canShoot)
      {
        m_canShoot = false;
        EventManager::Get().DispatchSpawnEvent("Bullet", Vec2(position.x, position.y));
        EventManager::Get().DispatchSoundEvent(AssetManager::Get().GetSound("Player-Shoot"));
      }
      break; 
  }

  // Moving left
  if(utls::IsKeyDown(SDL_SCANCODE_A) || utls::IsKeyDown(SDL_SCANCODE_LEFT))
    velocity.x = -PLYR_SPEED.x;
  // Moving right
  else if(utls::IsKeyDown(SDL_SCANCODE_D) || utls::IsKeyDown(SDL_SCANCODE_RIGHT))
    velocity.x = PLYR_SPEED.x;
  // Stop moving
  else
    velocity.x = 0.0f;
}

void Player::Update(float dt)
{
  // Kill the player when low on health
  if(health <= 0)
    isActive = false;

  // Counting the timer
  m_cooldownTimer.Update();

  // Enable shooting when the timer runs out
  if(m_cooldownTimer.hasRunOut)
    m_canShoot = true;

  // Disable vertical movements when the player is in position...
  if(position.y <= (consts::SCREEN_HEIGHT - 64.0f))
    velocity.y = 0.0f;
  // ...else, keep the same vertical movement
  else
    velocity.y = PLYR_SPEED.y;
  
  // Constantly move the player depending on the velocity
  position += velocity * dt;

  // Restricting player's movements inside the borders
  position.x = utls::ClampF(position.x, 0, consts::SCREEN_WIDTH - size.x);

}

void Player::Render(SDL_Renderer* renderer)
{
  // Updating the position of the rect for collisions
  rect.x = position.x;
  rect.y = position.y;

  SDL_RenderCopyF(renderer, texture, nullptr, &rect);
}

void Player::Reset()
{
  position = initialPosition;
  velocity = Vec2(0.0f, PLYR_SPEED.y);
  m_isMoving = false;
  health = PLYR_MAX_HEALTH;
  isActive = true;
}

} // end of ps
