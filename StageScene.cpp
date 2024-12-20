#include "StageScene.h"

StageScene::StageScene() {}

void StageScene::Initialize() {
	inputHandle_ = new InputHandle();

	// Assing Command
	inputHandle_->AssignMoveLeftCommand2PressKeyA();
	inputHandle_->AssignMoveRightCommand2PressKeyD();

	// NewPlayer
	player_ = new Player();
}

void StageScene::Update() {
	// get input
	iCommand_ = inputHandle_->HandleInput();

	// set input
	if (this->iCommand_) {
		iCommand_->Execute(*player_);
	}
	player_->Update();
}

void StageScene::Draw() { player_->Draw();

}
