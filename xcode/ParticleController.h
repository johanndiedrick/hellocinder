//
//  ParticleController.h
//  hellocinder
//
//  Created by Johann Diedrick on 6/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef hellocinder_ParticleController_h
#define hellocinder_ParticleController_h

#pragma once
#include "Particle.h"
#include <list>

class ParticleController{
public:
    ParticleController();
    void update();
    void draw();
    
    void addParticles( int amt );
    void removeParticles( int amt );
    
    std::list<Particle> mParticles;
};

#endif
