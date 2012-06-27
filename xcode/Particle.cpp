//
//  Particle.cpp
//  hellocinder
//
//  Created by Johann Diedrick on 6/27/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include "Particle.h"
#include "cinder/Rand.h"
#include "Cinder/gl/gl.h"
#include "cinder/app/AppBasic.h"

using namespace ci;

Particle::Particle(){
}

Particle::Particle( Vec2f loc){
    mLoc = loc; // location is passed in when making a new particle
    mDir = Rand::randVec2f(); // direction is a random x-y vector
    mVel = Rand::randFloat(5.0f);
    mRadius = 5.0f; //needs a size!
}

void Particle::update(){
    
    mLoc += mDir * mVel;
    
}

void Particle::draw(){
    
    gl::drawSolidCircle( mLoc, mRadius);
    
}
