#pragma once
#include "ofApp.h"
#include "ofSoundPlayer.h"

#define SIZEX 156
#define SIZEY 120

class Button {

private:

	
	ofVec2f position;
	ofSoundPlayer* notes;

public:

	ofImage* color;
	Button(ofVec2f pos, ofImage notClicked, ofImage clicked);
	~Button();
	bool IsClicked;
	bool OnClick(ofVec2f posMouse, ofVec2f posButton);
	void Draw();
	void Play();


};
