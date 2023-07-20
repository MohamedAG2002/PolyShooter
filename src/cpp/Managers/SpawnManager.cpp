#include "../../header/Managers/SpawnManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Utls.h"
#include "../../header/Constants.h"

namespace ps { // beginning of ps
 
SpawnManager::SpawnManager()
{
  m_startTimer.Start();
  m_spawnTimer.Start();
  m_difficultyTimer.Start();

  position = Vec2(32.0f, 0.0f);
}

void SpawnManager::Update()
{
  m_startTimer.Update();
  
  // Do NOTHING when this timer has not runout
  // In other words, start evrything below when this timer finishes
  if(!m_startTimer.hasRunOut)
    return;

  // Update timers
  m_spawnTimer.Update();
  m_difficultyTimer.Update();

  // Spawn an enemy and relocate to somewhere else
  if(m_spawnTimer.hasRunOut)
  {
    EventManager::Get().DispatchSpawnEvent("Enemy", position);
    position.x = (float)utls::GetRandom(64, consts::SCREEN_WIDTH - 64); 
  }

  // When this timer has runout, the time it takes to spawn an enemy 
  // will decrease. Therefore, enemies will spawn quicker than before
  // Also, there is a limit of how much the spawn timer can decrease
  if(m_difficultyTimer.hasRunOut && m_spawnTimer.maxTime >= 30)
    m_spawnTimer.maxTime -= 8.0f;
}

void SpawnManager::Reset()
{
  m_startTimer.Reset();
  m_spawnTimer.Reset();
  m_difficultyTimer.Reset();
}

} // end of ps
