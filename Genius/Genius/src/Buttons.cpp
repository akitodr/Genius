#include "Buttons.h"

Button::Button(ofVec2f pos, char* notClicked, char* clicked, char* sound) { //construtor
	//da load nas parada
	//cria um botão com todos esses parâmetros
	position = pos;
	colorNotClicked.load(notClicked);
	colorClicked.load(clicked);
	note.load(sound);
	IsClicked = false;
}

bool Button::Check(ofVec2f posMouse) {//checa colisão do mouse com o botão
	return (posMouse.x > position.x && posMouse.x < (position.x + SIZEX)
		&& posMouse.y > position.y && posMouse.y < (position.y + SIZEY));

}

void Button::Play() {
	if (IsClicked) {
		return;
	}
	note.play();
	IsClicked = true;
	clickTime = 0;
}

void Button::Update(float secs) {
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
		cout << "Não!" << endl;
	}
}

Button::~Button() {

}