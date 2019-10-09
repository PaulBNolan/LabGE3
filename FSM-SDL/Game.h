#ifndef GAME_HPP
#define GAME_HPP
#include <SDL.h>
#undef main
#include <stdio.h>
#include "Debug.h"
#include "Player.h"
#include "Input.h"
class Game
{
public:
	Game();
	~Game();

	void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	
	void handleEvents();
	void update();
	void render();
	void clean();

	void loadContent();
	void unloadContent();

	bool running() { return m_running; };

private:
	int cnt = 0;
	bool m_running;
	SDL_Window* m_window;
	SDL_Renderer* m_renderer;
	SDL_Texture* m_texture;
	SDL_Rect m_source;
	SDL_Rect m_destination;

	Player* m_player;
	Input m_input;

	int m_x = 0;
	int m_y = 0;

	Uint32 m_ticks;
	Uint32 m_sprite;

	SDL_Surface* m_surface;
};

#endif // !GAME_HPP

