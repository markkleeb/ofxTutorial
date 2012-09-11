/*
 *  particle.cpp
 *  emptyExample
 *
 *  Created by itp student on 9/10/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "particle.h"

particle::particle(ofPoint l){

	acceleration = ofPoint(0, 0.05);
	//velocity = ofPoint(ofRandom(-1,1), ofRandom(-2,0));
	velocity.set(ofRandom(-1,1), ofRandom(-2,0));
	location = l;
	lifespan = 255.0;
	
	
}


void particle::run(){
	
	update();
	display();
	
}

void particle::update(){

	velocity += acceleration;
	location += velocity;
	lifespan -= 2.0;
	
	
}


void particle::display(){

	
	ofSetColor(lifespan);
	ofFill();
	ofEllipse(location.x, location.y, 8, 8);
	
	
}

bool particle::isDead(){

	if(lifespan < 0.0){
		return true;
	}
	else {
		return false;
	}
	
	
}
