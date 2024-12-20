#include "InputHandle.h"
#include "Novice.h"
ICommand* InputHandle::HandleInput() { 
	if (Novice::CheckHitKey(DIK_D)) {
		return this->pressKeyD_;
	}
	
	if (Novice::CheckHitKey(DIK_A)) {
		return this->pressKeyA_;
	}
	return nullptr; }

void InputHandle::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}

void InputHandle::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}
