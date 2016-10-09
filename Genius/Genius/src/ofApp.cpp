#include "ofApp.h"
#include "Buttons.h"
#include <vector>

vector<Button*> button;
ofVec2f mousePos;

Button* green;
Button* red;
Button* yellow;
Button* blue;


//--------------------------------------------------------------
void ofApp::setup() {
	green = new Button(ofVec2f(100, 100), "img/green.png", "img/greenClick.png", "sound/do.wav");
	red = new Button(ofVec2f(100+SIZEX+10, 100), "img/red.png", "img/redClick.png", "sound/re.wav");
	yellow = new Button(ofVec2f(100, 100+SIZEY+10), "img/yellow.png", "img/yellowClick.png", "sound/fa.wav");
	blue = new Button(ofVec2f(100 + SIZEX + 10, 100 + SIZEY + 10), "img/blue.png", "img/blueClick.png", "sound/mi.wav");
	button.push_back(green);
	button.push_back(red);
	button.push_back(yellow);
	button.push_back(blue);
}

//--------------------------------------------------------------
void ofApp::update() {
	green->Check(mousePos);
	//green->Play();
}

//--------------------------------------------------------------
void ofApp::draw() {
	green->Draw();
	red->Draw();
	blue->Draw();
	yellow->Draw();
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
