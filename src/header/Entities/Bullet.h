#pragma once

#include "../Core/Vec2.h"
#include "../Core/Color.h"
#include "Entity.h"

#include <SDL.h>

namespace ps { // beginning of ps

const float BULLET_SPEED = 400.0f;

class Bullet : public Entity
{
  public:
    Bullet(float posX, float posY);

  public:
    Vec2 velocity, size;
    SDL_Texture* texture = nullptr;

  public:
    void ProcessInput(SDL_Event event) override;
    void Update(float dt) override;
    void Render(SDL_Renderer* renderer) override;
};

} // end of ps
