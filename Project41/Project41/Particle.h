#pragma once

namespace SDLParticles {
	struct Particle
	{
		Particle();
		void Update();
		double m_x;
		double m_y;
		double m_speed;
		double m_direction;
	};
}

