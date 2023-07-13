#pragma once

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#include <unordered_map>
#include <string>

namespace ps { // beginning of ps
  
// A singleton class to handle all of the assets in the game
class AssetManager
{
  // Methods
  // ------------------------------------------- 
  public:
    // Call this everytime a method or member of this class needs to be accessed
    static AssetManager& Get();

    // Loads all of the assets
    void LoadAssets(SDL_Renderer* renderer); 

    // Loads only the font
    void LoadFont();

    // Loads only the sprites
    void LoadSprites(SDL_Renderer* renderer);

    // Unload all of the assets
    void UnloadAssets();

    // Return the font
    TTF_Font* GetFont(const std::string&& fontName);

    // Return the sprite
    SDL_Texture* GetSprite(const std::string&& spriteName);
  // ------------------------------------------- 

  // Finky stuff to make this class a singleton
  // ------------------------------------------- 
  public:
    // Deleting the copy constructor 
    AssetManager(const AssetManager&) = delete;

    // Making it impossible to assign this class
    void operator=(const AssetManager&) = delete;
  // ------------------------------------------- 

  // Members   
  // ------------------------------------------- 
  private:
    std::unordered_map<std::string, TTF_Font*> m_fonts;      
    std::unordered_map<std::string, SDL_Texture*> m_sprites;      
  // ------------------------------------------- 

  // Constructor
  // ------------------------------------------- 
  private:
    AssetManager() {}
    ~AssetManager() {}
  // ------------------------------------------- 
};

};
