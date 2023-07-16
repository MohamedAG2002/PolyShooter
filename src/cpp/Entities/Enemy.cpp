#include "../../header/Entities/Enemy.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Managers/AssetManager.h"
#include "../../header/Managers/EventManager.h"

#include <SDL.h>

namespace ps { // beginning of ps

Enemy::Enemy(float posX, float posY, bool active)
{
  // Inherited variables
  position = Vec2(posX, posY);
  id = "Enemy";
  isActive = active;

  // Own variables
  texture = AssetManager::Get().GetSprite("Enemy");
  velocity = Vec2(0.0f, ENEMY_SPEED);
  size = Vec2(32.0f, 32.0f);
}

void Enemy::ProcessInput(SDL_Event event)
{
  // Does nothing here...
}

void Enemy::Update(float dt)
{
  // Deactivate and stay off-screen when going outside of the window
  if(position.y < 0)
  {
    position = Vec2(-100.0f, -100.0f);
    isActive = false;
  }

  // Constantly move the enemy
  position += velocity * dt;
}

void Enemy::Render(SDL_Renderer* renderer)
{
  SDL_FRect rect = {position.x, position.y, size.x, size.y};
  SDL_RenderCopyF(renderer, texture, nullptr, &rect);
}

} // end of ps
