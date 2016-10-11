#include "Buttons.h"

Button::Button(ofVec2f pos, char* notClicked, char* clicked, char* sound) { //construtor
	//da load nas parada
	//cria um bot�o com todos esses par�metros
	position = pos;
	colorNotClicked.load(notClicked);
	colorClicked.load(clicked);
	note.load(sound);
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

void Button::Draw() {
	colorNotClicked.draw(position.x, position.y);

	if (!IsClicked) {
		colorClicked.draw(position.x, position.y);
		cout << "N�o!" << endl;
	}
}

Button::~Button() {

}