#include "../../header/Scenes/OverScene.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/SceneType.h"
#include "../../header/UI/Text.h"
#include "../../header/Enums/Anchor.h"
#include "../../header/Enums/TextType.h"
#include "../../header/Core/Color.h"
#include "../../header/Core/Vec2.h"

#include <SDL2/SDL.h>

#include <memory>

namespace ps { // beginning of ps

OverScene::OverScene()
{
  m_title = std::make_unique<Text>("YOU DIED!", Anchor::TOP_CENTER, TextType::BIG_TEXT, Color::White);
  m_scoreText = std::make_unique<Text>("SCORE:", Anchor::CENTER, TextType::MEDIUM_TEXT, Color::White);
  m_highScoreText = std::make_unique<Text>("HIGH SCORE:", Anchor::CENTER, TextType::MEDIUM_TEXT, Color::White, Vec2(0.0f, 50.0f));
  m_replayText = std::make_unique<Text>("[SPACE] REPLAY", Anchor::BOTTOM_LEFT, TextType::SMALL_TEXT, Color::White);
}

void OverScene::ProcessInputs(SDL_Event event)
{
  switch(event.type)
  {
    case SDL_KEYDOWN:
      // TRANSITION: Over to Game
      if(event.key.keysym.sym == SDLK_SPACE)
        EventManager::Get().DispatchSceneEvent(SceneType::GAME);
      break; 
  }
}

void OverScene::Update(float dt)
{
  // Does nothing here...
}

void OverScene::Render(SDL_Renderer* renderer)
{
  m_title->Render(renderer);
  m_scoreText->Render(renderer);
  m_highScoreText->Render(renderer);
  m_replayText->Render(renderer);
}

void OverScene::Reset()
{
   // Does nothing here...
}

} // end of ps
