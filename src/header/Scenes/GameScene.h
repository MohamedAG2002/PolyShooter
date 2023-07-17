#pragma once 

#include "Scene.h"
#include "../UI/Text.h"
#include "../Managers/EntityManager.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps {
  
class GameScene : public Scene
{
  public:
    GameScene(int& score);

  public:
    void ProcessInputs(SDL_Event event);
    void Update(float dt);
    void Render(SDL_Renderer* renderer);
    void Reset();

  private:
    // Managers
    std::unique_ptr<EntityManager> m_enttMgr;
   
    std::unique_ptr<Text> m_healthText, m_scoreText, m_pauseText, m_toMenuText;
    bool m_isPaused;
};

}
