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

Player::Player( string input, Player*** array_player, int player_num ) {
	tower = new Tower();
	money = 1000;
	name = (input);
	position = 0;
	players = **array_player;
	num_player = player_num;
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
	money += amount;
}

int Player::getMoney() {
	return money;
}

Tower* Player::getTower() {
	return tower;
}

void Player::sneakySwap(Player& choosen ) {
	// cout << this->name << "PRINTING NAME" << endl;
	// tower->setBillBoard( choosen.getTower()->getTopBillBoard() );
	if ( !( choosen.getTower()->Top_BillBoard.empty() ) ) {
		cout << "BEFORE : " << tower->getHeight() << endl;
		tower->setBillBoard( choosen.getTower()->Top_BillBoard.top() );
		tower->setHeight( choosen.getTower()->Top_BillBoard.top()->getValue() );
		cout << "GAINED : " << tower->getHeight() << endl;
		cout << name << " acquired " << choosen.getName() <<"'s " <<  choosen.getTower()->Top_BillBoard.top()->getName() << "billbaord.";


		cout << "BEFORE : " << choosen.getTower()->getHeight() << endl;
		choosen.getTower()->setHeight( -( tower->Top_BillBoard.top()->getValue() ) );
		choosen.getTower()->Top_BillBoard.pop();
		cout << "LOST : " << choosen.getTower()->getHeight() << endl;

	} else {
		cout << choosen.name << " does not have any billboards." << endl;
	}


}

Player* Player::getPlayers(){
	return players;
}

void Player::setGlobal(int newPosition)
{
	position = newPosition;
}
