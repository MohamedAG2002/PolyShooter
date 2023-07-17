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

Player::Player(float posX, float posY)
{
  // Inherited members
  position = Vec2(posX, posY);
  id = "Player";
  isActive = true;

  // Own members
  velocity = Vec2(0.0f, 0.0f);
  size = Vec2(32.0f, 32.0f);
  health = PLYR_MAX_HEALTH;
  texture = AssetManager::Get().GetSprite("Player");
  rect = {position.x, position.y, size.x, size.y};

  m_cooldownTimer.Start();
  m_canShoot = true;

  // Lambda implementation
  m_collCallback = [&](EventType et) {
    health -= 1;
    // Potentially, disable the collider for a couple of seconds
  };

  // Listening to events
  EventManager::Get().ListenToCollisionEvent(EventType::PLAYER_COLLISION, m_collCallback);
} 

void Player::ProcessInput(SDL_Event event)
{
  switch(event.type)
  {
    case SDL_KEYDOWN:
      if(event.key.keysym.sym == SDLK_SPACE && m_canShoot)
      {
        m_canShoot = false;
        EventManager::Get().DispatchSpawnEvent("Bullet", Vec2(position.x, position.y));
      }
      break; 
  }

  // Moving left
  if(utls::IsKeyDown(SDL_SCANCODE_A))
    velocity.x = -PLYR_SPEED;
  // Moving right
  else if(utls::IsKeyDown(SDL_SCANCODE_D))
    velocity.x = PLYR_SPEED;
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

  if(m_cooldownTimer.hasRunOut)
    m_canShoot = true;
  
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

} // end of ps
