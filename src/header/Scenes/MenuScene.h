#pragma once 

#include "Scene.h"
#include "../UI/Text.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps {
  
class MenuScene : public Scene
{
  public:
    MenuScene();

  public:
    void ProcessInputs(SDL_Event event);
    void Update(float dt);
    void Render(SDL_Renderer* renderer);
    void Reset();

  private:
    std::unique_ptr<Text> m_title, m_playText;
};

}
