#include "../header/Utls.h"

#include <SDL_events.h>
#include <SDL_keyboard.h>
#include <SDL_pixels.h>
#include <SDL_rect.h>
#include <SDL_scancode.h>
#include <SDL_stdinc.h>

#include <random>

namespace ps { // beginning of ps

namespace utls { // beginning of utls

float ClampF(float value, float min, float max)
{
  if(value < min) 
    return min;
  else if(value > max)
    return max;
  else 
    return value;
}

bool IsKeyDown(SDL_Scancode key)
{
  const Uint8* keys = SDL_GetKeyboardState(NULL);
  return keys[key];
}

int GetRandom(int min, int max)
{
  std::random_device rndDevice;
  std::default_random_engine rndEngine(rndDevice());
  std::uniform_int_distribution<int> uniformDist(min, max);
  return uniformDist(rndEngine);
}

bool CheckSATCollision(SDL_FRect rec1, SDL_FRect rec2)
{
  float leftRec1 = rec1.x;
  float rightRec1 = rec1.x + rec1.w;
  float topRec1 = rec1.y;
  float bottomRec1 = rec1.y + rec1.h;

  float leftRec2 = rec2.x;
  float rightRec2 = rec2.x + rec2.w;
  float topRec2 = rec2.y;
  float bottomRec2 = rec2.y + rec2.h;

  return ((leftRec1 < rightRec2) && (rightRec1 > leftRec2)) &&
         ((topRec1 < bottomRec2) && (bottomRec1 > topRec2)); 
}

SDL_Color PSColorToSDLColor(const Color color)
{
  return SDL_Color{color.r, color.g, color.b, color.a}; 
}

} // end of utls

} // end of ps
