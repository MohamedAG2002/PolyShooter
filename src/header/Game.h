#pragma once

#include "Managers/SceneManager.h"
#include "Managers/AudioManager.h"
#include "Background.h"

#include <SDL2/SDL.h>

#include <memory>
#include <string>

namespace ps { // beginning of ps

class Game
{
  public:
    Game();
    ~Game();

  public:
    bool isRunning;
    float lastFrameTime, deltaTime;
    SDL_Event event;
    
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

  public:
    void ProcessInputs();
    void Update();
    void Render();
    void Run();

  private:
    Background m_background;
    std::unique_ptr<SceneManager> m_scnMgr;
    AudioManager m_audioMgr;

  private:
    void m_ExitGameWithError(std::string&& errMsg);
};

} // end of ps
