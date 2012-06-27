//
//  Particle.h
//  hellocinder
//
//  Created by Johann Diedrick on 6/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef hellocinder_Particle_h
#define hellocinder_Particle_h

#pragma once
#include "cinder/Channel.h"
#include "cinder/Vector.h"

#include <vector>

class Particle{
public:
    Particle();
    Particle( ci::Vec2f );
    void update();
    void draw();
    
    ci::Vec2f mLoc;
    ci::Vec2f mDir;
    float mVel;
    
    float mRadius;
};


#endif
