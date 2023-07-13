#pragma once

#include <SDL2/SDL.h>

namespace ps { // beginning of ps

class Scene
{
  public:
    virtual void ProcessInputs(SDL_Event event) = 0;
    virtual void Update(float dt) = 0;
    virtual void Render(SDL_Renderer* renderer) = 0;
    virtual void Reset() = 0;
};

} // end of ps
