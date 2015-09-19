#pragma once

namespace SDLParticles {
	struct Particle
	{
		Particle();
		void init();
		void Update(int interval);

		double m_x;
		double m_y;
		double m_speed;
		double m_direction;
	};
}

