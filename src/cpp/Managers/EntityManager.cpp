#include "../../header/Managers/EntityManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Entities/Player.h"
#include "../../header/Entities/Bullet.h"
#include "../../header/Constants.h"
#include "../../header/Core/Vec2.h"

#include <SDL.h>

#include <string>
#include <vector>
#include <memory>
#include <functional>
#include <iostream>

namespace ps { // beginning of ps
 
EntityManager::EntityManager()
{
  m_entities.push_back(std::make_shared<Player>(consts::SCREEN_WIDTH / 2.0f - 16.0f, consts::SCREEN_HEIGHT - 64.0f));

  // Listening to events
  SpawnEventCallback spawnCallback = [&](const std::string& id, const Vec2& pos) {
    std::cout << "Hello, world" << std::endl; 
  };
}

EntityManager::~EntityManager()
{
  m_entities.clear();
}

void EntityManager::ProcessInputs(SDL_Event event)
{
  for(auto entt : m_entities)
  {
    entt->ProcessInput(event);
  }
}

void EntityManager::Update(float dt)
{
  for(auto entt : m_entities)
  {
    if(entt->isActive)
      entt->Update(dt);
  }
}

void EntityManager::Render(SDL_Renderer* renderer)
{
  for(auto entt : m_entities)
  {
    if(entt->isActive)
      entt->Render(renderer);
  }
}

} // end of ps
