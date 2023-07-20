#pragma once

#include "../Enums/EventType.h"

#include <cstdint>
#include <functional>
#include <memory>

namespace ps { // beginning of ps

class ScoreManager
{
  public:
    ScoreManager();

  public:
    using CollisionEventCallback = std::function<void(EventType)>;

  public:
    uint16_t score, highScore;

  public:
    void Update();
};

extern std::unique_ptr<ScoreManager> g_scrMgr;

} // end of ps
