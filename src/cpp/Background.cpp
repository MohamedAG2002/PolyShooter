#include "../header/Background.h"
#include "../header/Core/Vec2.h"
#include "../header/Core/Color.h"
#include "../header/Utls.h"
#include "../header/Constants.h"

#include <SDL2/SDL.h>

#include <vector>

namespace ps { // beginning of ps

Background::Background()
{
  m_position = Vec2(2.0f, 2.0f);

  for(int i = 0; i < MAX_STARS; i++)
  {
    // Add a new star to the vector
    m_stars.push_back(std::make_shared<Star>(m_position.x, m_position.y)); 
    
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

void Background::Update(float dt)
{
  for(auto star : m_stars)
  {
    star->Update(dt);
  }
}

void Background::Render(SDL_Renderer* renderer)
{
  for(auto star : m_stars)
  {
    star->Render(renderer);
  }
}

} // end of ps
