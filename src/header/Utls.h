#pragma once

#include "Core/Color.h"
#include <SDL_events.h>
#include <SDL_pixels.h>
#include <SDL_scancode.h>
#include <SDL_rect.h>
#include <cstdint>

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

// Converts the engine's own color to SDL's color
SDL_Color PSColorToSDLColor(const Color color);

// Saves data to a file 
void SaveDateToFile(uint16_t data);

// Get some data from the file
uint16_t GetDataFromFile();

} // end of utls

} // end of ps
