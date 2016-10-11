#pragma once

#include "Buttons.h"
#include <vector>

vector<Button*> button;

class Genius {
private:

public:
	void Init();
	void Update(ofVec2f posMouse, float time, float timeBefore);
	void Draw();
	Genius::~Genius();
};
