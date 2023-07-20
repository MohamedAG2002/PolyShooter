#pragma once

#include "../Core/Vec2.h"
#include "../Core/Timer.h"

#include <SDL.h>

namespace ps { // beginning of ps

const float MAX_SPAWN_TIME = 70.0f;
const float MAX_DIFFICULTY_TIME = 450.0f;

class SpawnManager
{
  public:
    SpawnManager();

  public:
    Vec2 position;

  public:
    void Update();
    void Reset();

  private:
    Timer m_startTimer = Timer(70.0f, true);
    Timer m_spawnTimer = Timer(MAX_SPAWN_TIME, false);
    Timer m_difficultyTimer = Timer(MAX_DIFFICULTY_TIME, false);
};

} // end of ps
