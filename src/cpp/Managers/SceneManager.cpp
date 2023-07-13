#include "../../header/Managers/SceneManager.h"
#include "../../header/Enums/SceneType.h"
#include "../../header/Scenes/MenuScene.h"
#include "../../header/Scenes/GameScene.h"
#include "../../header/Scenes/OverScene.h"
#include "../../header/Managers/EventManager.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps { // beginning of ps

SceneManager::SceneManager()
{
  m_scenes["Menu"] = std::make_shared<MenuScene>(); 
  m_scenes["Game"] = std::make_shared<GameScene>(); 
  m_scenes["Over"] = std::make_shared<OverScene>(); 

  currentScene = m_scenes["Menu"];

  SceneEventCallback changeScene = [&](SceneType st) {
    switch(st)
    {
      case SceneType::MENU:
        currentScene = m_scenes["Menu"];
        currentScene->Reset();
        break;
      case SceneType::GAME:
        currentScene = m_scenes["Game"];
        currentScene->Reset(); 
        break;
      case SceneType::OVER:
        currentScene = m_scenes["Over"];
        currentScene->Reset(); 
        break;
    }
  };

  // Listen to the scene event
  EventManager::Get().ListenToSceneEvent(changeScene);
}

SceneManager::~SceneManager()
{
  m_scenes.clear();
}

void SceneManager::ProcessInputs(SDL_Event event)
{
  currentScene->ProcessInputs(event);
}

void SceneManager::Update(float dt)
{
  currentScene->Update(dt);
}

void SceneManager::Render(SDL_Renderer* renderer)
{
  currentScene->Render(renderer);
}

} // end of ps
