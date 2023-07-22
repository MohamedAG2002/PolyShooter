#pragma once

#include "Core/Vec2.h"
#include "Entities/Star.h"

#include <SDL2/SDL.h>

#include <vector>
#include <memory>

namespace ps { // beginning of ps

const int MAX_STARS = 150;

class Background
{
  public:
    Background();
    ~Background();

  public:
    void Update(float dt);
    void Render(SDL_Renderer* renderer);

  private:
    Vec2 m_position;
    Star m_star = Star(2.0f, 2.0f);
    std::vector<std::shared_ptr<Star>> m_stars;
};

} // end of ps
