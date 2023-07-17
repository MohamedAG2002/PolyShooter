#include "../header/Background.h"
#include "../header/Core/Vec2.h"
#include "../header/Core/Color.h"
#include "../header/Utls.h"
#include "../header/Constants.h"

#include <SDL.h>

#include <vector>

namespace ps { // beginning of ps

Background::Background()
{
  m_position = Vec2(2.0f, 2.0f);
  m_color = Color::White;

  for(int i = 0; i < MAX_STARS; i++)
  {
    // Add a new star to the vector
    m_stars.push_back(SDL_Rect{(int)m_position.x, (int)m_position.y, STAR_SIZE, STAR_SIZE}); 
    
    // Pick two random numbers
    int randPosX = utls::GetRandom(STAR_SIZE * 2, consts::SCREEN_WIDTH - (STAR_SIZE * 2));
    int randPosY = utls::GetRandom(STAR_SIZE * 2, consts::SCREEN_HEIGHT - (STAR_SIZE * 2));
  
    // Guarantee the position is always unique
    while(randPosX == m_position.x || randPosY == m_position.y)
    {
      randPosX = utls::GetRandom(STAR_SIZE * 2, consts::SCREEN_WIDTH - (STAR_SIZE * 2));
      randPosY = utls::GetRandom(STAR_SIZE * 2, consts::SCREEN_HEIGHT - (STAR_SIZE * 2));    
    }
    
    // Set the new position for the next iteration
    m_position = Vec2(randPosX, randPosY);
  }
}

Background::~Background()
{
  m_stars.clear();
}

void Background::Render(SDL_Renderer* renderer)
{
  for(auto star : m_stars)
  {
    SDL_SetRenderDrawColor(renderer, m_color.r, m_color.g, m_color.b, m_color.a);
    SDL_RenderFillRect(renderer, &star);
  }
}

} // end of ps
