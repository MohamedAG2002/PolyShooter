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
    void Update();

  private:
    float m_timer;
    bool m_isOneTime, m_hasStarted;
};

} // end of ps
