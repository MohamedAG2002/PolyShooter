#pragma once

#include "../Enums/SceneType.h"
#include "../Entities/Entity.h"
#include "../Core/Vec2.h"

#include <functional>
#include <string>

namespace ps { // beginning of ps

// A singleton class to handle all of the events in the game
class EventManager
{
  // Type definations
  // ------------------------------------------- 
  public:
    using SceneEventCallback = std::function<void(SceneType)>;
    using SpawnEventCallback = std::function<void(const std::string&, const Vec2&)>;
  // ------------------------------------------- 
  
  // Methods
  // ------------------------------------------- 
  public:
    // Call this everytime a method or member of this class needs to be accessed
    static EventManager& Get();
    
    // Scene event
    void ListenToSceneEvent(SceneEventCallback& scnCallback);
    void DispatchSceneEvent(SceneType st);

    // Sound event
    
    // Collision event

    // Spawn event
    void ListenToSpawnEvent(SpawnEventCallback& spawnCallback);
    void DispatchSpawnEvent(const std::string& id, const Vec2& pos);
  // ------------------------------------------- 

  // Finky stuff to make this class a singleton
  // ------------------------------------------- 
  public:
    // Deleting the copy constructor 
    EventManager(const EventManager&) = delete;

    // Making it impossible to assign this class
    void operator=(const EventManager&) = delete;
  // ------------------------------------------- 

  // Members   
  // ------------------------------------------- 
  private:
    SceneEventCallback m_scnCallback;
    SpawnEventCallback m_spawnCallback;  
  // ------------------------------------------- 

  // Constructor
  // ------------------------------------------- 
  private:
    EventManager() {}
    ~EventManager() {}
  // ------------------------------------------- 
};

} // end of ps
