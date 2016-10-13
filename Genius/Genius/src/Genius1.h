#pragma once

#include "Buttons.h"
#include <vector>


class Genius {
private:
	vector<Button*> button;
	vector<int>colors;
	int listPos;
	bool Status;
public:
	void Init();
	bool Sequence();
	void Update(ofVec2f posMouse, float time);
	void Draw();
};
