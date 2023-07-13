#include "../header/Utls.h"

#include <SDL_events.h>
#include <SDL_keyboard.h>
#include <SDL_scancode.h>
#include <SDL_stdinc.h>

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

} // end of utls

} // end of ps
