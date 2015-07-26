#pragma once
#include <SDL.h>
#include <iostream>
#include <iomanip>

using namespace std;

namespace SDLScreen {
	class Screen
	{
	public:
		const static int WIN_WIDTH = 800;
		const static int WIN_HEIGHT = 600;

		Screen();
		bool init();
		bool processEvents();
		void Close();
		void Update();
		void Clear();
		//Uint stands for unsigned int and Unint8 is for an unsigned int of 8 bits or 1 byte
		void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
		
	private:
		SDL_Window* m_window;
		SDL_Renderer* m_renderer;
		SDL_Texture* m_texture;
		Uint32* m_buffer_1;
	};

}

