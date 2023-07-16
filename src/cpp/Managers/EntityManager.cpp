#include "../../header/Managers/EntityManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Entities/Player.h"
#include "../../header/Entities/Bullet.h"
#include "../../header/Entities/Enemy.h"
#include "../../header/Constants.h"
#include "../../header/Core/Vec2.h"

#include <SDL.h>

#include <iostream>
#include <string>
#include <array>
#include <memory>
#include <functional>

namespace ps { // beginning of ps
 
EntityManager::EntityManager()
{
  m_player = std::make_shared<Player>(consts::SCREEN_WIDTH / 2.0f - 16.0f, consts::SCREEN_HEIGHT - 64.0f);
  
  // Filling the array with bullet reserves
  for(int i = 0; i < MAX_BULLETS; i++)
  {
    m_bullets.at(i) = std::make_shared<Bullet>(-30.0f, -30.0f, false);
  }
  
  // Filling the array with enemy reserves
  for(int i = 0; i < MAX_ENEMIES; i++)
  {
    m_enemies.at(i) = std::make_shared<Enemy>(-100.0f, -100.0f, false);
  }

  // Lambda implementation
  SpawnEventCallback spawnCallback = [&](const std::string& id, const Vec2& pos) {
    if(id == "Bullet")
      m_SpawnEntity<Bullet>(m_bullets, pos);
    else if(id == "Enemy")
      m_SpawnEntity<Enemy>(m_enemies, pos);
  };

  // Listening to events
  EventManager::Get().ListenToSpawnEvent(spawnCallback);
}

EntityManager::~EntityManager()
{}

void EntityManager::ProcessInputs(SDL_Event event)
{
  if(m_player->isActive)
    m_player->ProcessInput(event);

  for(auto bullet : m_bullets)
  {
    if(bullet->isActive)
      bullet->ProcessInput(event);
  }

  for(auto enemy : m_enemies)
  {
    if(enemy->isActive)
      enemy->ProcessInput(event);
  }
}

void EntityManager::Update(float dt)
{
  m_spawnMgr.Update();

  if(m_player->isActive)
    m_player->Update(dt);
  
  for(auto bullet : m_bullets)
  {
    if(bullet->isActive)
      bullet->Update(dt);
  }

  for(auto enemy : m_enemies)
  {
    if(enemy->isActive)
      enemy->Update(dt);
  }
}

void EntityManager::Render(SDL_Renderer* renderer)
{
  if(m_player->isActive)
    m_player->Render(renderer);
  
  for(auto bullet : m_bullets)
  {
    if(bullet->isActive)
      bullet->Render(renderer);
  }

  for(auto enemy : m_enemies)
  {
    if(enemy->isActive)
      enemy->Render(renderer);
  }
}

// Goes through the entity reserves and pick up the ones that are inactive,
// makes it active and sets its position to the given Vec2.
// The break statement is there to enure that only ONE entity is
// activated each call that is made to this function
template<typename T>
void EntityManager::m_SpawnEntity(const std::vector<std::shared_ptr<T>>& entities, const Vec2& pos)
{
  for(auto entity : entities)
  {
    if(!entity->isActive)
    {
      entity->position = pos;
      entity->isActive = true;
      break; // Break out of the loop and thus the function
    }
  }
}

} // end of ps
