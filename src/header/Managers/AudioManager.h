#pragma once

#include <SDL2/SDL_mixer.h>

#include <functional>

namespace ps { // beginning of ps

class AudioManager
{
  public:
    AudioManager();

  public:
    using SoundEventCallback = std::function<void(Mix_Chunk*)>;

  private:
    int m_volume;
};

} // end of ps
