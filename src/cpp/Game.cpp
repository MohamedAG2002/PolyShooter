#include "../header/Game.h"
#include "../header/Constants.h"
#include "../header/Managers/AssetManager.h"
#include "../header/Managers/SceneManager.h"

#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <SDL2/SDL_image.h>

#include <iostream>
#include <memory>
#include <string>

namespace ps { // beginning of ps

Game::Game()
{
  isRunning = true;
  lastFrameTime = 0.0;
  deltaTime = 0.0;
  event = {0};
  
  // Err if something goes wrong with SDL initialization 
  if(SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS) != 0)
    m_ExitGameWithError("SDL failed to initialize");
 
  // Err if something goes wrong with SDL_ttf initialization 
  if(TTF_Init() != 0)
    m_ExitGameWithError("SDL_ttf failed to initialize");

  // This does not need to check for errors as it returns the IMG init flags given.
  IMG_Init(IMG_INIT_PNG);

  // Window init
  window = SDL_CreateWindow("Poly Shooter", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 
                            consts::SCREEN_WIDTH, consts::SCREEN_HEIGHT, SDL_WINDOW_SHOWN);

  // Err if the window does not get created
  if(!window)
    m_ExitGameWithError("Failed to create SDL window");

  // Renderer init
  renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);

  // Err if the renderer does not get created
  if(!renderer)
    m_ExitGameWithError("Failed to create SDL Renderer");

  // Managers init
  AssetManager::Get().LoadAssets(renderer);
  m_scnMgr = std::make_unique<SceneManager>();
}

Game::~Game()
{
  AssetManager::Get().UnloadAssets();

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);

  IMG_Quit();
  TTF_Quit();
  SDL_Quit();
}

void Game::ProcessInputs()
{
  // Do nothing when there is no events to process
  if(!SDL_PollEvent(&event))
    return;

  switch(event.type)
  {
    case SDL_QUIT:
      isRunning = false;
      break;
    case SDL_KEYDOWN:
      if(event.key.keysym.sym == SDLK_ESCAPE)
        isRunning = false;
      break;
  }

  m_scnMgr->ProcessInputs(event);
}

void Game::Update()
{
  // Getting the difference between the last frame and the time since
  // SDL's initialization and converting it to seconds(since the result
  // will be in milliseconds)
  deltaTime = (SDL_GetTicks() - lastFrameTime) / 1000.0;
  lastFrameTime = SDL_GetTicks();
  
  m_scnMgr->Update(deltaTime);
  m_background.Update(deltaTime);
}

void Game::Render()
{
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderClear(renderer);

  m_background.Render(renderer);
  m_scnMgr->Render(renderer);

  SDL_RenderPresent(renderer);
}

void Game::Run()
{
  while(isRunning)
  {
    ProcessInputs();
    Update();
    Render();
  }
}

void Game::m_ExitGameWithError(std::string&& errMsg)
{
  isRunning = false;
  std::cerr << errMsg << ": " << SDL_GetError() << std::endl;
}

} // end of ps
