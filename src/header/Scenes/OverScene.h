#pragma once 

#include "Scene.h"
#include "../UI/Text.h"
#include "../Managers/ScoreManager.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps {
  
class OverScene : public Scene
{
  public:
    OverScene(int& score, int& highScore);

  public:
    void ProcessInputs(SDL_Event event);
    void Update(float dt);
    void Render(SDL_Renderer* renderer);
    void Reset();

  private:
    std::unique_ptr<Text> m_title, m_scoreText, m_highScoreText, m_replayText;
};

}
