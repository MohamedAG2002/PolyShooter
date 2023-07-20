#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/EventType.h"
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

// Sound event functions
// -------------------------------------------------------------------
void EventManager::ListenToSoundEvent(SoundEventCallback& sndCallback)
{
  m_soundCallback = sndCallback; 
}

void EventManager::DispatchSoundEvent(Mix_Chunk* sound)
{
  m_soundCallback(sound);
}
// -------------------------------------------------------------------

// Collision event
// -------------------------------------------------------------------
void EventManager::ListenToCollisionEvent(EventType et, CollisionEventCallback& collCallback)
{
  if(et == EventType::PLAYER_COLLISION)
    m_playerColl = collCallback;
  else if(et == EventType::BULLET_COLLISION)
    m_bulletColl = collCallback;
}

void EventManager::DispatchCollisionEvent(EventType et)
{
  if(et == EventType::PLAYER_COLLISION)
    m_playerColl(et);
  else if(et == EventType::BULLET_COLLISION)
    m_bulletColl(et);
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
