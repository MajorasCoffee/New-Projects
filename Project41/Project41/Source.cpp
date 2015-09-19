#include <SDL.h>
#include <iostream>
#include "Screen.h"
#include "Particle.h"
#include "Swarm.h"
#include <math.h>
#include <stdlib.h>

using namespace std;
using namespace SDLScreen;
using namespace SDLParticles;

int main(int argc, char** argv) {
	srand(time(NULL));

	Screen screen;

	if (!screen.init()) {
		cout << "Error initializing SDL" << endl;
	}

	Swarm swarm1;
	const int win_Height = Screen::WIN_HEIGHT / 2;
	const int win_Width = Screen::WIN_WIDTH / 2;

	while (true) {
		int elapsedTime = SDL_GetTicks();

		swarm1.Update(elapsedTime);

		unsigned char red = (1 + sin(elapsedTime * 0.0003)) * 128;
		unsigned char green = (1 + sin(elapsedTime * 0.0004)) * 128;
		unsigned char blue = (1 + sin(elapsedTime * 0.0005)) * 128;

		const Particle* const pParticles = swarm1.getParticles();

		for (int i = 0; i < Swarm::NParticle; i++) {
			Particle particles = pParticles[i];

			int x = (particles.m_x + 1) * win_Width;
			int y = particles.m_y * win_Width + win_Height;

			screen.setPixel(x, y, red, green, blue);
		}

		screen.BoxBlur();

		screen.Update();

		if (!screen.processEvents()) {
			break;
		}
	}
	screen.Close();
	return 0;
}