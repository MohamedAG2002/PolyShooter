#pragma once

#include "../Enums/EventType.h"

#include <functional>

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

} // end of ps
