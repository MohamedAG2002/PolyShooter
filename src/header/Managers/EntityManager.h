#pragma once

#include "../Entities/Entity.h"
#include "../Core/Vec2.h"

#include <SDL.h>

#include <string>
#include <vector>
#include <memory>
#include <functional>

namespace ps { // beginning of ps

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
    std::vector<std::shared_ptr<Entity>> m_entities;
};

} // end of ps
