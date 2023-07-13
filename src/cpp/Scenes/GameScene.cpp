#include "../../header/Scenes/GameScene.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/SceneType.h"
#include "../../header/Enums/Anchor.h"
#include "../../header/Enums/TextType.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps {
  
GameScene::GameScene()
{
  m_healthText = std::make_unique<Text>("Health: 0", Anchor::TOP_LEFT, TextType::MEDIUM_TEXT, Color::White);
  m_scoreText = std::make_unique<Text>("Score: 0", Anchor::TOP_RIGHT, TextType::MEDIUM_TEXT, Color::White);
  m_pauseText = std::make_unique<Text>("PAUSED", Anchor::CENTER, TextType::BIG_TEXT, Color::White);
  m_toMenuText = std::make_unique<Text>("[M] MENU", Anchor::BOTTOM_LEFT, TextType::MEDIUM_TEXT, Color::White);

  m_isPaused = false;

  m_enttMgr = std::make_unique<EntityManager>();
}

void GameScene::ProcessInputs(SDL_Event event)
{
  switch(event.type)
  {
    case SDL_KEYDOWN:
      // TRANSITION: Game to Over
      if(event.key.keysym.sym == SDLK_o)
        EventManager::Get().DispatchSceneEvent(SceneType::OVER);
      // TRANSITION: Game to Pause(and then back again)
      else if(event.key.keysym.sym == SDLK_p)
        m_isPaused = !m_isPaused;
      // TRANSITION: Pause to Menu
      else if(event.key.keysym.sym == SDLK_m && m_isPaused)
        EventManager::Get().DispatchSceneEvent(SceneType::MENU);
      break; 
  }

  m_enttMgr->ProcessInputs(event);
}

void GameScene::Update(float dt)
{
  // Only update the game when not paused
  if(m_isPaused)
    return;

  m_enttMgr->Update(dt);
}

void GameScene::Render(SDL_Renderer* renderer)
{
  m_healthText->Render(renderer);
  m_scoreText->Render(renderer);

  if(m_isPaused)
  {
    m_pauseText->Render(renderer);
    m_toMenuText->Render(renderer);
  }

  m_enttMgr->Render(renderer);
}

void GameScene::Reset()
{
  m_isPaused = false;
}

}
