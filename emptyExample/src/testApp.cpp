#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
	
	ofEnableSmoothing();

}

//--------------------------------------------------------------
void testApp::update(){

}

bool removeIfDead(particle& p) {
	return p.isDead();
}

//--------------------------------------------------------------
void testApp::draw(){
	
	ofBackground(255);
	
	particles.push_back(particle(ofPoint(ofGetWindowWidth()/2, 50)));
	
	
	for(int i = 0; i < particles.size(); i++){
		
		particles[i].run();
		/*
		if(particles[i].isDead()){
			
			
		
			particles.erase(particles.begin() + i);
			
		}
		*/
		
	}
	ofRemove(particles, removeIfDead);
	

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}