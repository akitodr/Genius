#include "ofApp.h"
#include "Buttons.h"
#include <vector>

vector<Button*> button;
ofVec2f mousePos;

Button* green;


//--------------------------------------------------------------
void ofApp::setup(){
	green = new Button(ofVec2f(100, 100), "img/green.png", "img/greenClick.png", "sound/do.wav");
	button.push_back(green);
}

//--------------------------------------------------------------
void ofApp::update(){
	green->Check(mousePos);
}

//--------------------------------------------------------------
void ofApp::draw(){
		green->Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	mousePos.set(x, y);
	green->IsClicked = true;
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
