#include "ofApp.h"
#include "Genius1.h"

float before;

ofVec2f mousePos;
Genius* game;


//--------------------------------------------------------------
void ofApp::setup() {
	before = ofGetElapsedTimef();
	game->Init();
}

//--------------------------------------------------------------
void ofApp::update() {
	float time = ofGetElapsedTimef() - before;
	before = ofGetElapsedTimef();

	game->Update(mousePos, time, before);
}

//--------------------------------------------------------------
void ofApp::draw() {
	
	game->Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key) {

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key) {

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button) {

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button) {
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button) {
	mousePos.set(x, y);
	
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y) {

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h) {

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg) {

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo) {

}
