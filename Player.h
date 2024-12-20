#pragma once
#include "Vector2.h"
class Player {

public:
	Player();
	void Initialize();
	void Update();
	void Draw();

	void MoveRight();
	void MoveLeft();


private:
	Vector2 pos;
	float speed;
};
