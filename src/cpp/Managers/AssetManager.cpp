#include "../../header/Managers/AssetManager.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#include <iostream>

namespace ps { // beginning of ps

AssetManager& AssetManager::Get()
{
  static AssetManager instance;
  return instance;
}

void AssetManager::LoadAssets(SDL_Renderer* renderer)
{
  LoadFont();
  LoadSprites(renderer);
}

void AssetManager::LoadFont()
{
  m_fonts["Small"] = TTF_OpenFont("assets/font/bit5x3.ttf", 24);
  m_fonts["Medium"] = TTF_OpenFont("assets/font/bit5x3.ttf", 30);
  m_fonts["Big"] = TTF_OpenFont("assets/font/bit5x3.ttf", 50);

  // Err if any of the fonts do not load
  // Only checking for the first font because they all have the same path
  if(!m_fonts["Small"])
    std::cout << "Font failed to load: " << TTF_GetError() << std::endl;
}

void AssetManager::LoadSprites(SDL_Renderer* renderer)
{
  m_sprites["Player"] = IMG_LoadTexture(renderer, "assets/sprites/player.png");
  m_sprites["Enemy"] = IMG_LoadTexture(renderer, "assets/sprites/enemy.png");
  m_sprites["Bullet"] = IMG_LoadTexture(renderer, "assets/sprites/bullet.png");

  // Err if any of the textures do not load
  for(auto[k, v] : m_sprites)
  {
    if(!v)
      std::cout << k << " texture failed to load: " << IMG_GetError() << std::endl;
  }
}

void AssetManager::UnloadAssets()
{
  // Unloading the fonts
  TTF_CloseFont(m_fonts["Big"]);
  TTF_CloseFont(m_fonts["Medium"]);
  TTF_CloseFont(m_fonts["Small"]);
  m_fonts.clear();

  // Unloading textures
  SDL_DestroyTexture(m_sprites["Player"]);
  SDL_DestroyTexture(m_sprites["Enemy"]);
  SDL_DestroyTexture(m_sprites["Bullet"]);
  m_sprites.clear();
}

TTF_Font* AssetManager::GetFont(const std::string&& fontName)
{
  return m_fonts[fontName];
}

SDL_Texture* AssetManager::GetSprite(const std::string&& spriteName)
{
  return m_sprites[spriteName];
}

} // end of ps
