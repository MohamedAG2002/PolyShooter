#pragma once

#include "../Core/Vec2.h"
#include "Entity.h"

#include <SDL.h>

namespace ps { // beginning of ps

const float ENEMY_SPEED = 300.0f;

class Enemy : public Entity
{
  public:
    Enemy(float posX, float posY, bool active);

  public:
    Vec2 velocity, size;
    SDL_Texture* texture = nullptr;
    SDL_FRect rect;

  public:
    void ProcessInput(SDL_Event event) override;
    void Update(float dt) override;
    void Render(SDL_Renderer* renderer) override;
};

} // end of ps 
