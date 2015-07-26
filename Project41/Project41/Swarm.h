#pragma once
#include "Particle.h"

namespace SDLParticles {
	class Swarm
	{
	public:
		Swarm();
		~Swarm();
		const Particle* const getParticles() { return m_pParticle; }
		void Update();

		const static int NParticle = 5000;//number of particles
	private:
		Particle*  m_pParticle;
	};
}

