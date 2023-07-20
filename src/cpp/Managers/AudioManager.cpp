#include "../../header/Managers/AudioManager.h"
#include "../../header/Managers/EventManager.h"
#include "../../header/Enums/EventType.h"

#include <SDL_mixer.h>

namespace ps { // beginning of ps

AudioManager::AudioManager()
{
  m_volume = 100;

  // Lambda implementation
  SoundEventCallback callback = [&](Mix_Chunk* sound) {
    Mix_Volume(-1, m_volume);
    Mix_PlayChannel(-1, sound, 0);
  };
  
  // Listening to events
  EventManager::Get().ListenToSoundEvent(callback);
}

} // end of ps
