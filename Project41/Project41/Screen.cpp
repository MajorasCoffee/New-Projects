#include "Screen.h"
namespace SDLScreen {
	Screen::Screen() :m_window(NULL), m_renderer(NULL), m_texture(NULL), m_buffer_1(NULL), m_buffer_2(NULL) {}

	bool Screen::init() {
		if (SDL_Init(SDL_INIT_VIDEO) < 0) {
			return false;
		}

		m_window = SDL_CreateWindow("Particles", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, WIN_WIDTH, WIN_HEIGHT, SDL_WINDOW_SHOWN);
		if (m_window == NULL) {
			SDL_Quit();
			return false;
		}

		m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_PRESENTVSYNC);//SDL_RENDERER_ACCELERATED//Unlocked FPS
		if (m_renderer == NULL) {
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}

		m_texture = SDL_CreateTexture(m_renderer, SDL_PIXELFORMAT_RGBA8888, SDL_TEXTUREACCESS_STATIC, WIN_WIDTH, WIN_HEIGHT);
		if (m_texture == NULL) {
			SDL_DestroyRenderer(m_renderer);
			SDL_DestroyWindow(m_window);
			SDL_Quit();
			return false;
		}

		m_buffer_1 = new Uint32[WIN_WIDTH * WIN_HEIGHT];
		m_buffer_2 = new Uint32[WIN_WIDTH * WIN_HEIGHT];

		memset(m_buffer_1, 0, WIN_WIDTH*WIN_HEIGHT*sizeof(Uint32));
		memset(m_buffer_2, 0, WIN_WIDTH*WIN_HEIGHT*sizeof(Uint32));
		return true;
	}

	void Screen::setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue) {
		if (x < 0 || x >= WIN_WIDTH || y < 0 || y >= WIN_HEIGHT) {
			return;
		}

		Uint32 color = 0;

		color += red;
		color <<= 8;
		color += green;
		color <<= 8;
		color += blue;
		color <<= 8;
		color += 0xFF;

		m_buffer_1[(y * WIN_WIDTH) + x] = color;
	}

	void Screen::Update() {
		SDL_UpdateTexture(m_texture, NULL, m_buffer_1, WIN_WIDTH * sizeof(Uint32));
		SDL_RenderClear(m_renderer);
		SDL_RenderCopy(m_renderer, m_texture, NULL, NULL);
		SDL_RenderPresent(m_renderer);
	}

	void Screen::BoxBlur() {
		Uint32* temp = m_buffer_1;
		m_buffer_1 = m_buffer_2;
		m_buffer_2 = temp;

		for (int y = 0; y < WIN_HEIGHT; y++) {
			for (int x = 0; x < WIN_WIDTH; x++) {
				int redTotal = 0;
				int greenTotal = 0;
				int blueTotal = 0;

				for (int row = -1; row <= 1; row++) {
					for (int col = -1; col <= 1; col++) {
						int currentX = x + col;
						int currentY = y + row;

						if ((currentX >= 0) && (currentX < WIN_WIDTH) && (currentY >= 0) && (currentY < WIN_HEIGHT)) {
							Uint32 color = m_buffer_2[currentY * WIN_WIDTH + currentX];
							Uint8 red = color >> 24;
							Uint8 green = color >> 16;
							Uint8 blue = color >> 8;

							redTotal += red;
							greenTotal += green;
							blueTotal += blue;
						}
					}
				}

				Uint8 red = redTotal / 9;
				Uint8 green = greenTotal / 9;
				Uint8 blue = blueTotal / 9;

				setPixel(x, y, red, green, blue);
			}
		}
	}

	bool Screen::processEvents() {
		SDL_Event event;
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				return false;
			}
		}
		return true;
	}

	void Screen::Close() {
		delete[] m_buffer_1;
		delete[] m_buffer_2;
		SDL_DestroyTexture(m_texture);
		SDL_DestroyRenderer(m_renderer);
		SDL_DestroyWindow(m_window);
		SDL_Quit();
	}
}
