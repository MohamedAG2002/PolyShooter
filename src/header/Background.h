#pragma once

#include "Core/Vec2.h"
#include "Core/Color.h"

#include <SDL.h>

#include <vector>

namespace ps { // beginning of ps

const int STAR_SIZE = 2;
const int MAX_STARS = 50;

class Background
{
  public:
    Background();
    ~Background();

  public:
    void Render(SDL_Renderer* renderer);

  private:
    Vec2 m_position;
    Color m_color;
    std::vector<SDL_Rect> m_stars;
};

} // end of ps
