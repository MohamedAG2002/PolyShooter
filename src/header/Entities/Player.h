#pragma once

#include "../Core/Vec2.h"
#include "../Core/Timer.h"
#include "Entity.h"
#include "../Enums/EventType.h"

#include <SDL2/SDL.h>

#include <cstdint>
#include <functional>

namespace ps { // beginning of ps

const Vec2 PLYR_SPEED = Vec2(410.0f, -70.0f);
const float PLYR_SPRITE_SIZE = 32.0f;
const uint8_t PLYR_MAX_HEALTH = 3;
const float PLYR_MAX_SHOT_COOLDOWN = 15.0f;

class Player : public Entity
{
  public:
    Player();

  public:
    using CollisionEventCallback = std::function<void(EventType et)>;

  public:
    Vec2 velocity, size, initialPosition;
    uint8_t health;
    SDL_Texture* texture = nullptr;
    SDL_FRect rect;

  public:
    void ProcessInput(SDL_Event event) override;
    void Update(float dt) override;
    void Render(SDL_Renderer* renderer) override;
    void Reset();

  private:
    bool m_isMoving;
    Timer m_cooldownTimer = Timer(PLYR_MAX_SHOT_COOLDOWN, false);    
    bool m_canShoot;
    CollisionEventCallback m_collCallback;
};

} // end of ps
