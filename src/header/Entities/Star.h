#pragma once

#include "Entity.h"
#include "../Core/Vec2.h"
#include "../Core/Color.h"

#include <SDL.h>

namespace ps { // beginning of ps

const int STAR_SIZE = 2;
const int STAR_SPEED = 100;

class Star : public Entity
{
  public:
    Star(float posX, float posY);

  public:
    Vec2 velocity, size;
    Color color;
    SDL_FRect rect;
  
  public:
    void ProcessInput(SDL_Event event) override;
    void Update(float dt) override;
    void Render(SDL_Renderer* renderer) override;
};

} // end of ps
