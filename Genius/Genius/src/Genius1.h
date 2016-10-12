#pragma once

#include "Buttons.h"
#include <vector>


class Genius {
private:
	vector<Button*> button;
public:
	void Init();
	void Update(ofVec2f posMouse, float time);
	void Draw();
};
