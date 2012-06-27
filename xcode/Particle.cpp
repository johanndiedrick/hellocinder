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
   
    //experiments in changing radius size
    
    // mRadius = 5.0f; //needs a size!
    //mRadius = Rand::randFloat(1.0f, 5.0f);
    //mRadius = cos(mLoc.y * 0.1f) + sin(mLoc.x * 0.1f) + 2.0f;
    //mRadius = (sin(mLoc.y * mLoc.x) + 1.0f ) * 2.0f;
    
    
    float xyOffset = sin(cos(sin(mLoc.y * 0.3183f) + cos(mLoc.x*0.3183f))) + 1.0f;
    mRadius = xyOffset * xyOffset * 1.8f;
}

void Particle::update(){
     
    //mLoc += mDir * mVel;
    //mRadius = Rand::randFloat(1.0f, 5.0f);

}

void Particle::update(const Channel32f &channel){
    mRadius = channel.getValue(mLoc) * 7.0f;
    //float gray = channel.getValue(mLoc);
    //mColor = Color(gray, gray, gray);

}

void Particle::draw(){
   // gl::color(mColor); 
   
    gl::drawSolidCircle( mLoc, mRadius);
    
}
