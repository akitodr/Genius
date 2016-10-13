#pragma once

#include "Buttons.h"
#include <vector>

#define SEQUENCE false
#define PLAYERTIME true

class Genius {
private:
	vector<Button*> button;
	vector<int>colors;
	int listPos;
	bool Status;
public:
	void Init();
	bool Sequence();
	bool PlayerTime();
	void Update(ofVec2f posMouse, float time);
	void Draw();
};
