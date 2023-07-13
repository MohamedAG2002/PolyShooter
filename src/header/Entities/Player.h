#pragma once

#include "../Core/Vec2.h"
#include "Entity.h"

#include <cstdint>

#include <SDL2/SDL.h>

namespace ps { // beginning of ps

const float PLYR_SPEED = 350.0f;
const uint8_t PLYR_MAX_HEALTH = 3;

class Player : public Entity
{
  public:
    Player(float posX, float posY);
 
  public:
    Vec2 velocity, size;
    uint8_t health;
    SDL_Texture* texture = nullptr;

  public:
    void ProcessInput(SDL_Event event) override;
    void Update(float dt) override;
    void Render(SDL_Renderer* renderer) override; 
};

} // end of ps
