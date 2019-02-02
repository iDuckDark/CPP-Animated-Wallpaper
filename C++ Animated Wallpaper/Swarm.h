//
//  Swarm.h
//  C++ Animated Wallpaper
//
//  Created by iDarkDuck on 2018-02-01.
//  Copyright © 2018 iDarkDuck. All rights reserved.
//

#ifndef SWARM_H_
#define SWARM_H_

#include "Particle.h"

class Swarm {
    
private:
	Particle * m_pParticles;
	int lastTime;

public:
    const static int NPARTICLES = 5000;
	Swarm();
	virtual ~Swarm();
	void update(int elapsed);
	const Particle * const getParticles() { return m_pParticles; };
};

#endif
