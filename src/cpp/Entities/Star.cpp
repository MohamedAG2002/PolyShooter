#include "../../header/Entities/Star.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Core/Color.h"
#include "../../header/Constants.h"

#include <SDL.h>

namespace ps { // beginning of ps

Star::Star(float posX, float posY)
{
  // Inherited variables
  position = Vec2(posX, posY);
  id = "Star";
  isActive = true;

  // Own variables
  velocity = Vec2(0.0f, STAR_SPEED);
  size = Vec2(STAR_SIZE, STAR_SIZE);
  color = Color::White;
  rect = SDL_FRect{position.x, position.y, size.x, size.y};
}

void Star::ProcessInput(SDL_Event event)
{
   // Does nothing here...
}

void Star::Update(float dt)
{
  // Move the star down
  position.y += velocity.y * dt;

  // Wrap around the screen when exiting
  if(position.y > consts::SCREEN_HEIGHT)
    position.y = 0;
}

void Star::Render(SDL_Renderer* renderer)
{
  // Updating the position
  rect.y = position.y;

  SDL_SetRenderDrawColor(renderer, color.r, color.g, color.b, color.a);
  SDL_RenderFillRectF(renderer, &rect);
}

} // end of ps
