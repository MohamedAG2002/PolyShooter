#pragma once

#include "../Core/Vec2.h"

#include <SDL2/SDL.h>

#include <string>

namespace ps { // beginning of ps

class Entity
{
  public:
    Vec2 position;
    std::string id;
    bool isActive;

  public:
    void ToString();
    virtual void ProcessInput(SDL_Event event) = 0;
    virtual void Update(float dt) = 0;
    virtual void Render(SDL_Renderer* renderer) = 0; 
};

} // end of ps
