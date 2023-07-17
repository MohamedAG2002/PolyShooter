#pragma once

#include <SDL_events.h>
#include <SDL_scancode.h>
#include <SDL_rect.h>

namespace ps { // beginning of ps

namespace utls { // beginning of utls

// Restrics 'value' from 'min' to 'max'
float ClampF(float value, float min, float max);

// A helper function to check key presses
bool IsKeyDown(SDL_Scancode key);

// Uses the C++ random distrbutor to get random numbers
int GetRandom(int min, int max);

// Uses the Seperating Axis Theorem to check for collisions
bool CheckSATCollision(SDL_FRect rec1, SDL_FRect rec2);

} // end of utls

} // end of ps
