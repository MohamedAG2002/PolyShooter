#include "../../header/Managers/ScoreManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/EventType.h"
#include "../../header/Utls.h"

#include <cstdint>
#include <memory>

namespace ps { // beginning of ps

// Extern variable init
std::unique_ptr<ScoreManager> g_scrMgr;

ScoreManager::ScoreManager()
{
  score = 0;
  highScore = utls::GetDataFromFile();

  // Lambda implementation
  CollisionEventCallback collCallback = [&](EventType et) {
    if(et == EventType::BULLET_COLLISION)
      score++;
  };

  EventManager::Get().ListenToCollisionEvent(EventType::BULLET_COLLISION, collCallback);
}

void ScoreManager::Update()
{
  // Setting the high score
  if(score > highScore)
  {
    highScore = score;
    utls::SaveDateToFile(highScore);
  }
}

} // end of ps
