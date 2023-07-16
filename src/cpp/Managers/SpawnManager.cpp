#include "../../header/Managers/SpawnManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Utls.h"
#include "../../header/Constants.h"

namespace ps { // beginning of ps
 
SpawnManager::SpawnManager()
{
  m_spawnTimer.Start();
  m_difficultyTimer.Start();

  position = Vec2(32.0f, 0.0f);
}

void SpawnManager::Update()
{
  m_spawnTimer.Update();
  m_difficultyTimer.Update();

  // Spawn an enemy and relocate to somewhere else
  if(m_spawnTimer.hasRunOut)
  {
    EventManager::Get().DispatchSpawnEvent("Enemy", position);
    position.x = (float)utls::GetRandom(32, consts::SCREEN_WIDTH - 32); 
  }

  // When this timer has runout, the time it takes to spawn an enemy 
  // will decrease. Therefore, enemies will spawn quicker than before
  if(m_difficultyTimer.hasRunOut)
    m_spawnTimer.maxTime -= 1.0f;
}

} // end of ps
