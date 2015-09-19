#pragma once
#include "Particle.h"

namespace SDLParticles {
	class Swarm
	{
	public:
		const static int NParticle = 5000;//number of particles

		Swarm();
		~Swarm();
		const Particle* const getParticles() { return m_pParticle; }
		void Update(int);

	private:
		Particle*  m_pParticle;
		int lastTime;
	};
}

