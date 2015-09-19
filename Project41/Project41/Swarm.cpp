#include "Swarm.h"

namespace SDLParticles {

	Swarm::Swarm(): lastTime(0){
		m_pParticle = new Particle[NParticle];
	}

	Swarm::~Swarm() {
		delete[] m_pParticle;
	}

	void Swarm::Update(int elapsedTime) {
		int interval = elapsedTime - lastTime;

		for (int i = 0; i < Swarm::NParticle; i++) {
			m_pParticle[i].Update(interval);
		}

		lastTime = elapsedTime;
	}

}