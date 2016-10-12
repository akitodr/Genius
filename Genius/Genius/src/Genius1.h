#pragma once

#include "Buttons.h"
#include <vector>


class Genius {
private:
	vector<Button*> button;
	vector<int>colors;
	bool State;
public:
	void Init();
	void Sequence(float time);
	void Update(ofVec2f posMouse, float time);
	void Draw();
};
