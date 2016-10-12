#include "Genius1.h"


void Genius::Init() {
	//[0]
	button.push_back(new Button(ofVec2f(100, 100), "img/green.png", "img/greenClick.png", "sound/do.wav"));
	//[1]
	button.push_back(new Button(ofVec2f(100 + SIZEX + 10, 100), "img/red.png", "img/redClick.png", "sound/re.wav"));
	//[2]
	button.push_back(new Button(ofVec2f(100, 100 + SIZEY + 10), "img/yellow.png", "img/yellowClick.png", "sound/fa.wav"));
	//[3]
	button.push_back(new Button(ofVec2f(100 + SIZEX + 10, 100 + SIZEY + 10), "img/blue.png", "img/blueClick.png", "sound/mi.wav"));
}

void Genius::Update(ofVec2f posMouse, float time) {

	int color = rand() % 4;

	for (int i = 0; i < button.size(); i++) {
		button[i]->Check(posMouse);
		button[i]->Update(time);
	}
}

void Genius::Draw() {

	for (int i = 0; i < button.size(); i++) {
			button[i]->Draw();
	}
}