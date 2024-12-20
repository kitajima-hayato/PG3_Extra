#pragma once
#include "IScene.h"
#include "InputHandle.h"
#include "ICommand.h"
#include "Player.h"
class StageScene : public IScene {
private:
	InputHandle* inputHandle_;
	ICommand* iCommand_;
	Player* player_;

public:
	StageScene();
	//~StageScene();
	void Initialize() override;
	void Update() override;
	void Draw() override;

};
