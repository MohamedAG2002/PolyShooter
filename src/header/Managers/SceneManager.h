#pragma once

#include "../Scenes/Scene.h"
#include "../Enums/SceneType.h"

#include <SDL2/SDL.h>

#include <functional>
#include <memory>
#include <unordered_map>
#include <string>

namespace ps { // beginning of ps

class SceneManager
{
  public:
    SceneManager();
    ~SceneManager();

  public:
    using SceneEventCallback = std::function<void(SceneType)>;  

  public:
    std::shared_ptr<Scene> currentScene;

  public:
    void ProcessInputs(SDL_Event event);
    void Update(float dt);
    void Render(SDL_Renderer* renderer);

  private:
    std::unordered_map<std::string, std::shared_ptr<Scene>> m_scenes;
};

} // end of ps
