#pragma once

#include "../Enums/EventType.h"

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
    int score, highScore;

  public:
    void Update();
};

extern std::unique_ptr<ScoreManager> g_scrMgr;

} // end of ps
