#include "../../header/Entities/Bullet.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Managers/AssetManager.h"

#include <SDL.h>

namespace ps { // beginnning of ps

Bullet::Bullet(float posX, float posY)
{
  // Inherited members
  position = Vec2(posX, posY);
  id = "Bullet";
  isActive = true;

  // Own members
  velocity = Vec2(0.0f, BULLET_SPEED);
  size = Vec2(16.0f, 16.0f);
  texture = AssetManager::Get().GetSprite("Bullet");
}

void Bullet::ProcessInput(SDL_Event event)
{
  // Does nothing here...
}

void Bullet::Update(float dt)
{
  // Deactivate when outside of the window
  if(position.x < -20)
    isActive = false;

  position += velocity * dt;
}

void Bullet::Render(SDL_Renderer* renderer)
{
  SDL_FRect rect = {position.x, position.y, size.x, size.y};
  SDL_RenderCopyF(renderer, texture, nullptr, &rect);
}

} // end of ps
