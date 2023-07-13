#include "../header/Game.h"

int main(int argc, char* argv[])
{
  ps::Game* game = new ps::Game();
  game->Run(); 
  delete game;

  return 0;
}
