#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/SceneType.h"

namespace ps { // beginning of ps

// Return static instance to use the functions in the class
// -------------------------------------------------------------------
EventManager& EventManager::Get()
{
  static EventManager instance;
  return instance;
}
// -------------------------------------------------------------------

// Scene event functions
// -------------------------------------------------------------------
void EventManager::ListenToSceneEvent(SceneEventCallback& scnCallback)
{
  m_scnCallback = scnCallback;
}

void EventManager::DispatchSceneEvent(SceneType st)
{
  m_scnCallback(st);
}
// -------------------------------------------------------------------

// Spawn event functions
// -------------------------------------------------------------------
void EventManager::ListenToSpawnEvent(SpawnEventCallback& spawnCallback)
{
  m_spawnCallback = spawnCallback;
}

void EventManager::DispatchSpawnEvent(const std::string& id, const Vec2& pos)
{
  m_spawnCallback(id, pos);
}
// -------------------------------------------------------------------

} // end of ps
