#include "../../header/Scenes/MenuScene.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/SceneType.h"
#include "../../header/Enums/Anchor.h"
#include "../../header/Enums/TextType.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps {
  
MenuScene::MenuScene()
{
  m_title = std::make_unique<Text>("Poly Shooter", Anchor::TOP_CENTER, TextType::BIG_TEXT, Color::White);
  m_playText = std::make_unique<Text>("[SPACE] PLAY", Anchor::CENTER, TextType::MEDIUM_TEXT, Color::White);
}

void MenuScene::ProcessInputs(SDL_Event event)
{
  switch(event.type)
  {
    case SDL_KEYDOWN:
      // TRANSITION: Menu to Game
      if(event.key.keysym.sym == SDLK_SPACE)
        EventManager::Get().DispatchSceneEvent(SceneType::GAME);
      break; 
  }
}

void MenuScene::Update(float dt)
{
  // Does nothing here...
}

void MenuScene::Render(SDL_Renderer* renderer)
{
  m_title->Render(renderer);
  m_playText->Render(renderer);
}

void MenuScene::Reset()
{
  // Does nothing here...
}

}
