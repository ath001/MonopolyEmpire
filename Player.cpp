/*
 * Player.cpp
 *
 *  Created on: Feb 21, 2014
 *      Author: Anh
 */

#include "Player.h"

#include <string>
#include <iostream>
using namespace std;

Player::Player( string input ) {
	tower = new Tower();
	money = 1000;
	name = (input);
	position= 0;
}

Player::~Player() {
	// TODO Auto-generated destructor stub
}

string Player::getName() {
	return name;
}

void Player::setPostion( int rolled_a ) {
	if ( position + rolled_a >= 36 ) {
		changeMoney( getTowerValue() );
		cout << " Receives " << getTowerValue() << " for passing GO. :";
	}
	position = (position + rolled_a) % 36;

//	cout << "POSTION AFTER ROLL " << position
}

int Player::getPosition() {
	return position;
}

int Player::getTowerValue() {
	return tower->getValue();
}
void Player::changeMoney( int amount ) {
	money+= amount;
}
int Player::getMoney() {
	return money;
}
