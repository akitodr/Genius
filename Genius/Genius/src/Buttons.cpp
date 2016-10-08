#include "Buttons.h"

Button::Button(ofVec2f pos, char* notClicked, char* clicked) {
	position = pos;
	color[0].load(notClicked);
	color[1].load(clicked);
}

bool Button::OnClick(ofVec2f posMouse, ofVec2f posButton) {
	return (posMouse.x > posButton.x && posMouse.x < (posButton.x + SIZEX)
		&& posMouse.y > posButton.y && posMouse.y < (posButton.y + SIZEY));
}

void Button::Play() {

}

void Button::Draw() {
	if (!IsClicked)
		color[0].draw(position.x, position.y);
	else
		color[1].draw(position.x, position.y);
}

Button::~Button() {

}