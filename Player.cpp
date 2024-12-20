#include "Player.h"
#include <Novice.h>

Player::Player() {
	this->pos = {10.0f, 10.0f};
	this->speed = 5.0f;
}

void Player::Initialize() {}

void Player::Update() {}

void Player::Draw() {
	// ここに描画処理を書く
	Novice::DrawBox((int)pos.x, (int)pos.y, 10, 10, 0.0f, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	// ここに右移動の処理を書く
	this->pos.x += this->speed;
}

void Player::MoveLeft() {
	// ここに左移動の処理を書く
	this->pos.x -= this->speed;
}
