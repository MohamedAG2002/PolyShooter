#pragma once

#include "../Entities/Player.h"
#include "../Entities/Bullet.h"
#include "../Entities/Enemy.h"
#include "../Core/Vec2.h"
#include "../Managers/SpawnManager.h"

#include <SDL.h>

#include <cstddef>
#include <string>
#include <vector>
#include <memory>
#include <functional>

namespace ps { // beginning of ps

const size_t MAX_BULLETS = 10;
const size_t MAX_ENEMIES = 40;

class EntityManager
{
  public:
    EntityManager();
    ~EntityManager();

  public:
    using SpawnEventCallback = std::function<void(const std::string&, const Vec2&)>; 

  public:
    void ProcessInputs(SDL_Event event);
    void Update(float dt);
    void CollisionUpdate();
    void Render(SDL_Renderer* renderer);
    void Reset();
    
  public:
    std::shared_ptr<Player> player;
    std::vector<std::shared_ptr<Bullet>> bullets = std::vector<std::shared_ptr<Bullet>>(MAX_BULLETS);   
    std::vector<std::shared_ptr<Enemy>> enemies = std::vector<std::shared_ptr<Enemy>>(MAX_ENEMIES);   
  
  private:
    SpawnManager m_spawnMgr;

  private:
    template<typename T>
    void m_SpawnEntity(const std::vector<std::shared_ptr<T>>& entities, const Vec2& pos);
};

} // end of ps
