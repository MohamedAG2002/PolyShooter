#include "../../header/Managers/ScoreManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/EventType.h"

namespace ps { // beginning of ps
 
ScoreManager::ScoreManager()
{
  score = 0;
  highScore = 0;

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
    highScore = score;
}

} // end of ps
