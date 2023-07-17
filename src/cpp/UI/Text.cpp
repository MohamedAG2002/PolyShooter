#include "../../header/UI/Text.h"
#include "../../header/Managers/AssetManager.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Core/Color.h"
#include "../../header/Constants.h"
#include "../../header/Utls.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#include <string>

namespace ps { // beginning of ps

Text::Text()
{
  text = "Default";
  m_position = Vec2{0.0f, 0.0f};
  color = Color::Red;
  textRect = {0};
}

Text::Text(std::string&& text, Anchor anchor, TextType type, Color color, Vec2 offset)
  :text(text), anchor(anchor), offset(offset), color(color)
{
  // Checking for the size of the font
  font = m_TypeToFont(type);

  // Getting the surface from the font
  textSurface = TTF_RenderText_Solid(font, text.c_str(), utls::PSColorToSDLColor(color));

  // Defining the position based on the anchor
  m_position = m_AnchorToVec2(anchor, offset); 

  // Defining the rect from the texture to render later
  textRect = {(int)m_position.x, (int)m_position.y, textSurface->w, textSurface->h};
}

Text::~Text()
{
  SDL_FreeSurface(textSurface);
  SDL_DestroyTexture(textTexture);
}

void Text::Render(SDL_Renderer* renderer)
{
  // Getting the texture from the surface
  textTexture = SDL_CreateTextureFromSurface(renderer, textSurface); 

  // Finally, rendering the text
  SDL_RenderCopy(renderer, textTexture, nullptr, &textRect);
}

void Text::ChangeText(std::string&& newText)
{
  // Re-applying the settings from before to change the text 
  text = newText;
  textSurface = TTF_RenderText_Solid(font, text.c_str(), utls::PSColorToSDLColor(color));
  m_position = m_AnchorToVec2(anchor, offset);
  textRect = {(int)m_position.x, (int)m_position.y, textSurface->w, textSurface->h};
}

Vec2 Text::m_AnchorToVec2(const Anchor anchor, Vec2& offset)
{
  switch(anchor)
  {
    case Anchor::TOP_LEFT:
      return Vec2(10.0f, 10.0f) + offset;
      break;
    case Anchor::TOP_CENTER:
      return Vec2(consts::SCREEN_WIDTH / 2.0f - textSurface->w / 2.0f, 10.0f) + offset;
      break;
    case Anchor::TOP_RIGHT:
      return Vec2(consts::SCREEN_WIDTH - textSurface->w - 10.0f, 10.0f) + offset;
      break;
  
    case Anchor::CENTER_LEFT:
      return Vec2(10.0f, consts::SCREEN_HEIGHT / 2.0f - textSurface->h / 2.0f) + offset;
      break;
    case Anchor::CENTER:
      return Vec2(consts::SCREEN_WIDTH / 2.0f - textSurface->w / 2.0f, 
                  consts::SCREEN_HEIGHT / 2.0f - textSurface->h / 2.0f) + offset;
      break;
    case Anchor::CENTER_RIGHT:
      return Vec2(consts::SCREEN_WIDTH - textSurface->w - 10.0f, 
                  consts::SCREEN_HEIGHT / 2.0f - textSurface->h / 2.0f) + offset;
      break;
  
    case Anchor::BOTTOM_LEFT:
      return Vec2(10.0f, consts::SCREEN_HEIGHT - textSurface->h - 10.0f) + offset;
      break;
    case Anchor::BOTTOM_CENTER:
      return Vec2(consts::SCREEN_WIDTH / 2.0f - textSurface->w / 2.0f, 
                  consts::SCREEN_HEIGHT - textSurface->h - 10.0f) + offset;
      break;
    case Anchor::BOTTOM_RIGHT:
      return Vec2(consts::SCREEN_WIDTH - textSurface->w - 10.0f, 
                  consts::SCREEN_HEIGHT - textSurface->h - 10.0f) + offset;
      break;
  }
  
  return Vec2(0.0f, 0.0f);
}

TTF_Font* Text::m_TypeToFont(const TextType type)
{
  switch(type)
  {
    case TextType::BIG_TEXT:
      return AssetManager::Get().GetFont("Big");
      break;
    case TextType::MEDIUM_TEXT:
      return AssetManager::Get().GetFont("Medium");
      break;
    case TextType::SMALL_TEXT:
      return AssetManager::Get().GetFont("Small");
      break;
  }

  return nullptr;
}

} // end of ps
