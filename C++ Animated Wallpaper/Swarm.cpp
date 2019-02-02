//
//  Swarm.cpp
//  C++ Animated Wallpaper
//
//  Created by iDarkDuck on 2018-02-01.
//  Copyright © 2018 iDarkDuck. All rights reserved.
//
#include "Swarm.h"

Swarm::Swarm(): lastTime(0) {
	m_pParticles = new Particle[NPARTICLES];

}

Swarm::~Swarm() {
	delete [] m_pParticles;
}

void Swarm::update(int elapsed) {
	int interval = elapsed - lastTime;
	for (int i = 0; i < Swarm::NPARTICLES; i++)
		m_pParticles[i].update(interval);
	lastTime = elapsed;
}
