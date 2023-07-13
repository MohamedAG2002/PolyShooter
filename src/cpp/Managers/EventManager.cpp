#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/SceneType.h"

namespace ps { // beginning of ps

EventManager& EventManager::Get()
{
  static EventManager instance;
  return instance;
}

void EventManager::ListenToSceneEvent(SceneEventCallback& scnCallback)
{
  m_scnCallback = scnCallback;
}

void EventManager::DispatchSceneEvent(SceneType st)
{
  m_scnCallback(st);
}

void EventManager::ListenToSpawnEvent(SpawnEventCallback& spawnCallback)
{
  m_spawnCallback = spawnCallback;
}

void EventManager::DispatchSpawnEvent(const std::string& id, const Vec2& pos)
{
  m_spawnCallback(id, pos);
}

} // end of ps
