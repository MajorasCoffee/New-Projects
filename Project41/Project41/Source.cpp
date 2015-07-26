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

	Swarm swarm;
	const int sH = Screen::WIN_HEIGHT / 2;
	const int sW = Screen::WIN_WIDTH / 2;

	//game loop
	while (true) {
		int elapsedTime = SDL_GetTicks();
		screen.Clear();
		swarm.Update();

		//Don't understand hue algorithm, look up tomorrow****************************
		unsigned char red = (1 + sin(elapsedTime * 0.0005)) * 125;
		unsigned char green = (1 + sin(elapsedTime * 0.0007)) * 125;
		unsigned char blue = (1 + sin(elapsedTime * 0.0008)) * 125;

		const Particle* const pParticles = swarm.getParticles();

		for (int i = 0; i < Swarm::NParticle; i++) {
			Particle particles = pParticles[i];

			int x = (particles.m_x + 1) * sW;
			int y = particles.m_y * sW+ sH;

			screen.setPixel(x, y, red, green, blue);
		}

		screen.Update();

		if (!screen.processEvents()) {
			break;
		}
	}
	screen.Close();

	return 0;
}