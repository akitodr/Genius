#include "Genius1.h"


void Genius::Init() {//criando lista de bot�es
	//[0] - green
	button.push_back(new Button(ofVec2f(100, 100), "img/green.png", "img/greenClick.png", "sound/do.wav"));
	//[1] - red
	button.push_back(new Button(ofVec2f(100 + SIZEX + 10, 100), "img/red.png", "img/redClick.png", "sound/re.wav"));
	//[2] - blue
	button.push_back(new Button(ofVec2f(100, 100 + SIZEY + 10), "img/yellow.png", "img/yellowClick.png", "sound/fa.wav"));
	//[3] - yellow
	button.push_back(new Button(ofVec2f(100 + SIZEX + 10, 100 + SIZEY + 10), "img/blue.png", "img/blueClick.png", "sound/mi.wav"));

	for (int i = 0; i < 4; i++) {//criando array de 4 inteiros aleat�rios
		colors.push_back(rand() % 4);
	}
}

void Genius::Sequence() {
	Status = SEQUENCE;
	listPos = 0;
	button[colors[listPos]]->Play();
}

void Genius::PlayerTime() {
	Status = PLAYERTIME;
	listPos = 0;
}

void Genius::Update(ofVec2f posMouse, float time) {
	//sequence
	if (Status == SEQUENCE) {
		button[colors[listPos]]->Update(time);
		if (!button[colors[listPos]]->IsClicked) {
			listPos++;
			if (listPos > colors.size()) {
				Status = PLAYERTIME;
			}
			else {
				button[colors[listPos]]->Play();
			}
		}
	} 

	if (Status == PLAYERTIME) {
		for (int i = 0; i < button.size(); i++) {
			if (button[i]->Check(posMouse)) {
				button[i]->Play();
			}
			button[i]->Update(time);
		}
	}
}

void Genius::Draw() {

	for (int i = 0; i < button.size(); i++) {
		button[i]->Draw();
	}
}

Genius::~Genius() {
	delete &button;
}