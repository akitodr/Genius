#include "Buttons.h"

Button::Button(ofVec2f pos, char* notClicked, char* clicked, char* sound) { //construtor
	//da load nas parada
	position = pos;
	colorNotClicked.load(notClicked);
	colorClicked.load(clicked);
	note.load(sound);
	srand(time(NULL));
}

bool Button::Check(ofVec2f posMouse) {//checa colis�o do mouse com o bot�o
	IsClicked = (posMouse.x > position.x && posMouse.x < (position.x + SIZEX)
		&& posMouse.y > position.y && posMouse.y < (position.y + SIZEY));

	return IsClicked;
}

void Button::Update(float secs) {
	//note.play();

	if (IsClicked) {
		clickTime += secs;

		if (clickTime > 0.5) {
			IsClicked = false;
			note.stop();
		}
	}
}

int Button::Sequence() {
	int color = rand() % 4;
	switch (color) {
	case 0://green
		break;
	case 1://red
		break;
	case2://blue
		break;
	case 3://yellow
		break;
	}
}

void Button::Draw() {
	colorNotClicked.draw(position.x, position.y);

	if (!IsClicked) {
		colorClicked.draw(position.x, position.y);
		cout << "N�o!" << endl;
	}
}

Button::~Button() {

}