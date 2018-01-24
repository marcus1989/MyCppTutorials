#include<iostream>
#include<math.h>
#include<SDL.h>
#include<stdlib.h>
#include<time.h>
#include "Screen.h"
#include "Swarm.h"
using namespace particle;

using namespace std;

int main(int argc, char **argv) {

	srand(time(NULL));

	Screen screen;

	if (screen.init() == false) {

		cout << "Error in initialising" << endl;
	}

	Swarm swarm;


	bool quit = false;

	while(!quit) {

		//Update particles
		//Draw particles

		int elapsed = SDL_GetTicks();
		//screen.clear();
		swarm.update(elapsed);

		unsigned char green = (unsigned char)((1 + sin(elapsed * 0.0001)) * 128);
		unsigned char red = (unsigned char)((1 + sin(elapsed * 0.0002)) * 128);
		unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.0003)) * 128);

		const Particle * const pParticles = swarm.getParticles();
		for (int i = 0; i < Swarm::NPARTICLES; i++) {

			Particle particle = pParticles[i];

			int x = (particle.m_x + 1) * Screen::SCREEN_WIDTH/2;
			int y = particle.m_y  * Screen::SCREEN_WIDTH/2 + Screen::SCREEN_HEIGHT/2;

			screen.setPixel(x,y,red,green,blue);
		}

		screen.boxBlur();

		//Draw the screen
		screen.update();

		//Check for messages/ Events
		if (screen.processEvents() == false) {
			break;
		}
		
	}

	screen.close();
	cin.get();
	return 0;
}