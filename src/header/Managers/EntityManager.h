#pragma once

#include "../Entities/Player.h"
#include "../Entities/Bullet.h"
#include "../Core/Vec2.h"

#include <SDL.h>

#include <cstddef>
#include <string>
#include <array>
#include <memory>
#include <functional>

namespace ps { // beginning of ps

const size_t MAX_BULLETS = 6;
const size_t MAX_ENEMIES = 20;

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
    void Render(SDL_Renderer* renderer);
    void Reset();

  private:
    std::shared_ptr<Player> m_player;
    std::array<std::shared_ptr<Bullet>, MAX_BULLETS> m_bullets;
    // TODO: Add enemies array
    //std::array<std::shared_ptr<Enemy>, MAX_BULLETS> m_enemies;
    
  private:
    void m_SpawnBullet(const Vec2& pos);
};

} // end of ps
