#pragma once

namespace ps { // beginning of ps
 
class Timer
{
  public:
    Timer();
    Timer(float timeToWait, bool oneTime);

  public:
    float maxTime;
    bool hasRunOut;

  public:
    void Start();
    void Update(float dt);

  private:
    float m_timer;
    bool m_isOneTime, m_hasStarted;
};

} // end of ps
