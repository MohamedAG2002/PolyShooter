#pragma once

#include "../Core/Vec2.h"
#include "../Core/Color.h"
#include "../Enums/Anchor.h"
#include "../Enums/TextType.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>

#include <string>

namespace ps { // beginning of ps

class Text
{
  public:
    Text();
    Text(std::string&& text, Anchor anchor, TextType type, Color color, Vec2 offset = Vec2::ZERO);
    ~Text();

  public:
    std::string text;
    Vec2 position;
    Color color;
    TTF_Font* font = nullptr;
    SDL_Surface* textSurface = nullptr;
    SDL_Texture* textTexture = nullptr;
    SDL_Rect textRect;

  public:
    void Render(SDL_Renderer* renderer);

  private:
    SDL_Color m_PSColorToSDLColor();
    Vec2 m_AnchorToVec2(const Anchor anchor, Vec2& offset);
    TTF_Font* m_TypeToFont(const TextType type);
};

} // end of ps
