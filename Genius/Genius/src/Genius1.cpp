#include "Genius1.h"


void Genius::Init() {
	srand(time(NULL));

	//[0]
	button.push_back(new Button(ofVec2f(100, 100), "img/green.png", "img/greenClick.png", "sound/do.wav"));
	//[1]
	button.push_back(new Button(ofVec2f(100 + SIZEX + 10, 100), "img/red.png", "img/redClick.png", "sound/re.wav"));
	//[2]
	button.push_back(new Button(ofVec2f(100, 100 + SIZEY + 10), "img/yellow.png", "img/yellowClick.png", "sound/fa.wav"));
	//[3]
	button.push_back(new Button(ofVec2f(100 + SIZEX + 10, 100 + SIZEY + 10), "img/blue.png", "img/blueClick.png", "sound/mi.wav"));
}

void Genius::Update(ofVec2f posMouse, float time, float timeBefore) {

	int color = rand() % 4;
	if (&button != nullptr) {
		switch (color) {
		case 0://green		
			button[0]->Check(posMouse);
			button[0]->Update(time);
			break;
		case 1://red
			button[1]->Check(posMouse);
			button[1]->Update(time);
			break;
		case 2://blue
			button[2]->Check(posMouse);
			button[2]->Update(time);
			break;
		case 3://yellow
			button[3]->Check(posMouse);
			button[3]->Update(time);
			break;
		}
	}
}

void Genius::Draw() {

	for (int i = 0; i < button.size(); i++) {
		if (button[i]) {
			button[i]->Draw();
		}
		else return;
	}
}

Genius::~Genius() {

}
