#pragma once

#include <SDL_events.h>
#include <SDL_scancode.h>

namespace ps { // beginning of ps

namespace utls { // beginning of utls

float ClampF(float value, float min, float max);
bool IsKeyDown(SDL_Scancode key);

} // end of utls

} // end of ps
