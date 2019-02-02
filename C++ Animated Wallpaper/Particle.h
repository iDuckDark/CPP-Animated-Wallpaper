//
//  Particle.h
//  C++ Animated Wallpaper
//
//  Created by iDarkDuck on 2018-02-01.
//  Copyright © 2018 iDarkDuck. All rights reserved.
//

#ifndef PARTICLE_H_
#define PARTICLE_H_

struct Particle {
private:
	void init();
    double m_speed;
    double m_direction;

public:
	Particle();
	virtual ~Particle();
	void update(int interval);
    double m_x;
    double m_y;
};

#endif
