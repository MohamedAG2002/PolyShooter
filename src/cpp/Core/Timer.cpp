#include "../../header/Core/Timer.h"

namespace ps { // beginning of ps
 
Timer::Timer()
{
  maxTime = 1.0f;
  hasRunOut = false;
  m_timer = 0.0f;
  m_initialTime = maxTime;
  m_isOneTime = false;
  m_hasStarted = false;
}

Timer::Timer(float timeToWait, bool oneTime)
  :m_initialTime(timeToWait), m_isOneTime(oneTime)
{
  maxTime = m_initialTime;
  hasRunOut = false;
  m_timer = 0.0f;
  m_hasStarted = false;
}

void Timer::Start()
{
  m_hasStarted = true;
}

void Timer::Update()
{
  if(!m_hasStarted)
    return;
  
  m_timer += 1;

  // If the timer ran out
  if(m_timer > maxTime)
  {
    hasRunOut = true;

    // Reset the timer
    m_timer = 0.0f;

    // Don't recount when the timer is one shot
    if(m_isOneTime)
    {
      hasRunOut = false;
      m_hasStarted = false;
    }
  }
  else
    hasRunOut = false;
}

void Timer::Reset()
{
  maxTime = m_initialTime;
  hasRunOut = false;
  m_timer = 0.0f;
  m_hasStarted = true;
}

} // end of ps
