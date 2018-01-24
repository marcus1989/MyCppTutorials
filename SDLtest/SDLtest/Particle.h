#pragma once


namespace particle {
	
	struct Particle
	{

		double m_x;
		double m_y;
		//double m_xspeed;
		//double m_yspeed;
	private:
		double m_speed;
		double m_direction;

	private:
		void init();

	public:
		Particle();
		~Particle();
		void update(int interval);
	};

}


