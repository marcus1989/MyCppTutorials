#include "Particle.h"
#define _USE_MATH_DEFINES
#include<cmath>
#include<stdlib.h>
using namespace std;

namespace particle {

	Particle::Particle() : m_x(0), m_y(0) {
		//m_x = ((2.0 * rand()) / RAND_MAX) - 1;
		//m_y = ((2.0 * rand()) / RAND_MAX) - 1;


		//m_xspeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);
		//m_yspeed = 0.001 * (((2.0 * rand()) / RAND_MAX) - 1);

		init();
		
	}

	void Particle::init() {

		m_x = 0;
		m_y = 0;

		m_direction = (2 * M_PI * rand()) / RAND_MAX;
		m_speed = (0.04 * rand()) / RAND_MAX;

		m_speed *= m_speed;
	}

	Particle::~Particle(){

	}

	void Particle::update(int interval) {

		/*const double speed = 0.01;

		m_x += m_xspeed;
		m_y += m_yspeed;

		if (m_x < -1.0 || m_x >= 1.0) {

			m_xspeed = -m_xspeed;
		}

		if (m_y < -1.0 || m_y >= 1.0) {

			m_yspeed = -m_yspeed;
		}*/

		m_direction += interval * 0.0003;

		double x_speed = m_speed * cos(m_direction);
		double y_speed = m_speed * sin(m_direction);

		m_x += x_speed * interval;
		m_y += y_speed * interval;

		if (m_x < -1 || m_x>1 || m_y < -1 || m_y>1) {

			init();
		}
	}

}


