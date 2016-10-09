#include "Buttons.h"

Button::Button(ofVec2f pos, char* notClicked, char* clicked, char* sound) { //construtor
	//da load nas parada
	position = pos;
	colorNotClicked.load(notClicked);
	colorClicked.load(clicked);
	note.load(sound);
}

bool Button::Check(ofVec2f posMouse) {//checa colisão do mouse com o botão
	IsClicked = (posMouse.x > position.x && posMouse.x < (position.x + SIZEX)
		&& posMouse.y > position.y && posMouse.y < (position.y + SIZEY));

	return IsClicked;
}

void Button::Play() {

	note.play();
	cout << "Não Play!" << endl;

	if (!IsClicked) {
		note.stop();
		IsClicked = false;
		cout << "Play" << endl;
	}

}

void Button::Draw() {

	colorNotClicked.draw(position.x, position.y);
	cout << "Verde" << endl;

	if (IsClicked) {
		colorClicked.draw(position.x, position.y);
		cout << "Não verde!" << endl;
	}
}

Button::~Button() {

}