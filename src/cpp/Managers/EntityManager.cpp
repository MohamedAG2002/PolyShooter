#include "../../header/Managers/EntityManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Entities/Player.h"
#include "../../header/Entities/Bullet.h"
#include "../../header/Entities/Enemy.h"
#include "../../header/Constants.h"
#include "../../header/Utls.h"
#include "../../header/Core/Vec2.h"
#include "../../header/Enums/EventType.h"
#include "../../header/Enums/SceneType.h"

#include <SDL.h>

#include <string>
#include <vector>
#include <memory>
#include <functional>

namespace ps { // beginning of ps
 
EntityManager::EntityManager()
{
  player = std::make_shared<Player>(consts::SCREEN_WIDTH / 2.0f - 16.0f, consts::SCREEN_HEIGHT - 64.0f);
  
  // Filling the array with bullet reserves
  for(int i = 0; i < MAX_BULLETS; i++)
  {
    bullets.at(i) = std::make_shared<Bullet>(-30.0f, -30.0f, false);
  }
  
  // Filling the array with enemy reserves
  for(int i = 0; i < MAX_ENEMIES; i++)
  {
    enemies.at(i) = std::make_shared<Enemy>(-100.0f, -100.0f, false);
  }

  // Lambda implementation
  SpawnEventCallback spawnCallback = [&](const std::string& id, const Vec2& pos) {
    if(id == "Bullet")
      m_SpawnEntity<Bullet>(bullets, pos);
    else if(id == "Enemy")
      m_SpawnEntity<Enemy>(enemies, pos);
  };

  // Listening to events
  EventManager::Get().ListenToSpawnEvent(spawnCallback);
}

EntityManager::~EntityManager()
{}

void EntityManager::ProcessInputs(SDL_Event event)
{
  if(player->isActive)
    player->ProcessInput(event);

  for(auto bullet : bullets)
  {
    if(bullet->isActive)
      bullet->ProcessInput(event);
  }

  for(auto enemy : enemies)
  {
    if(enemy->isActive)
      enemy->ProcessInput(event);
  }
}

void EntityManager::Update(float dt)
{
  m_spawnMgr.Update();

  if(player->isActive)
    player->Update(dt);
  else 
    EventManager::Get().DispatchSceneEvent(SceneType::OVER);
  
  for(auto bullet : bullets)
  {
    if(bullet->isActive)
      bullet->Update(dt);
  }

  for(auto enemy : enemies)
  {
    if(enemy->isActive)
      enemy->Update(dt);
  }
}

void EntityManager::CollisionUpdate()
{
  for(auto enemy : enemies)
  {
    // Only checking for collision if the current enemy is active
    if(!enemy->isActive)
       continue;
    
    // COLLISION: Player vs. Enemy
    if(utls::CheckSATCollision(player->rect, enemy->rect))
    {
      enemy->isActive = false;
      EventManager::Get().DispatchCollisionEvent(EventType::PLAYER_COLLISION); 
    }

    // COLLISION: Bullet vs. Enemy
    for(auto bullet : bullets)
    {
      if(!bullet->isActive)
        continue;

      if(utls::CheckSATCollision(bullet->rect, enemy->rect))
      {
        bullet->isActive = false;
        enemy->isActive = false;
        EventManager::Get().DispatchCollisionEvent(EventType::BULLET_COLLISION);
      }
    }
  }
}

void EntityManager::Render(SDL_Renderer* renderer)
{
  if(player->isActive)
    player->Render(renderer);
  
  for(auto bullet : bullets)
  {
    if(bullet->isActive)
      bullet->Render(renderer);
  }

  for(auto enemy : enemies)
  {
    if(enemy->isActive)
      enemy->Render(renderer);
  }
}

void EntityManager::Reset()
{
  // Player reset
  player->health = PLYR_MAX_HEALTH;
  player->position = Vec2(consts::SCREEN_WIDTH / 2.0f - 16.0f, consts::SCREEN_HEIGHT - 64.0f);
  player->isActive = true;
  
  // Bullet reset
  for(auto bullet : bullets)
  {
    bullet->position = Vec2(-100.0f, -100.0f);
    bullet->isActive = false;
  }

  // Enemy reset
  for(auto enemy : enemies)
  {
    enemy->position = Vec2(-100.0f, -100.0f);
    enemy->isActive = false;
  }

  // Managers reset
  m_spawnMgr.Reset();
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
