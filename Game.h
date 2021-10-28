#ifndef __Game__
#define __Game__

#include "SDL.h"
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"

class Game {
public:
  Game() {}
  ~Game() {}

  bool init(const char* title, int xpos, int ypos, int width, int height, int flags);
  void render();
  void update();
  bool running();
  void handleEvents();
  void clean();

private:
  SDL_Window* m_pWindow;
  SDL_Renderer* m_pRenderer;

  int m_currentFrame;

  bool m_bRunning;

  GameObject m_go;
  Player m_player;
};

#endif