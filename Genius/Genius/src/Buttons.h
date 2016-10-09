#pragma once
#include "ofApp.h"
#include "ofSoundPlayer.h"

#define SIZEX 156
#define SIZEY 120

class Button {

private:

	ofVec2f position;
	ofImage colorNotClicked;
	ofImage colorClicked;
	ofSoundPlayer note;

public: 

	Button(ofVec2f pos, char* notClicked, char* clicked, char* sound);
	~Button();
	bool IsClicked;
	bool Check(ofVec2f posMouse);
	void Draw();
	void Play();


};
