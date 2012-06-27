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
    
    ParticleController(int res);
    
    void update();
    
    void update(const ci::Channel32f &channel);

    void draw();
    
    void addParticles( int amt );
    void removeParticles( int amt );
    
    void addParticle( int xi, int yi);
    
    std::list<Particle> mParticles;
    
    int mYRes, mXRes;
    
};

#endif
