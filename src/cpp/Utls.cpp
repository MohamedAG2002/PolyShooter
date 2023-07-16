#include "../header/Utls.h"

#include <SDL_events.h>
#include <SDL_keyboard.h>
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

} // end of utls

} // end of ps
