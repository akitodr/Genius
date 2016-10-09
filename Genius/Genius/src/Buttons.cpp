#include "Buttons.h"

Button::Button(ofVec2f pos, char* notClicked, char* clicked, char* sound) {
	position = pos;
	colorNotClicked.load(notClicked);
	colorClicked.load(clicked);
	note.load(sound);
}

bool Button::Check(ofVec2f posMouse) {
	return (posMouse.x > position.x && posMouse.x < (position.x + SIZEX)
		&& posMouse.y > position.y && posMouse.y < (position.y + SIZEY));
}

void Button::Play() {

}

void Button::Draw() {
	if (!IsClicked) {
		colorNotClicked.draw(position.x, position.y);
		cout << "Verde" << endl;
	}
	else {
		colorClicked.draw(position.x, position.y);
		cout << "Deu ruim!" << endl;
	}
}

Button::~Button() {

}