#pragma once
#include "ICommand.h"
class InputHandle {
public:
	ICommand* HandleInput();
	void AssignMoveRightCommand2PressKeyD();
	void AssignMoveLeftCommand2PressKeyA();

private:
	ICommand* pressKeyD_ = nullptr;
	ICommand* pressKeyA_ = nullptr;
};
