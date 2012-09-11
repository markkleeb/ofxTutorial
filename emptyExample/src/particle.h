/*
 *  particle.h
 *  emptyExample
 *
 *  Created by itp student on 9/10/12.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#pragma once
#include "ofMain.h"


class particle{
	
public:
	
	particle(ofPoint l);
	
	void run();
	void update();
	void display();
	bool isDead();
	
	
	ofPoint location;
	ofPoint velocity;
	ofPoint acceleration;
	float lifespan;


};


