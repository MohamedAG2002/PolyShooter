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
    void Reset();

  private:
    float m_timer, m_initialTime;
    bool m_isOneTime, m_hasStarted;
};

} // end of ps
