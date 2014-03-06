/*
 * Player.h
 *
 *  Created on: Feb 21, 2014
 *      Author: Anh
 */

#ifndef PLAYER_H_
#define PLAYER_H_
#include <string>
#include "Tower.h"
using namespace std;

class Player {
private:
	string name;
	int money;
	int position;
	Tower * tower;

public:
	Player( string input );
	virtual ~Player();
	string getName();
	int getPosition();
	void setPostion( int move );
	int getTowerValue();
	void changeMoney( int amount );
	int getMoney();
};

#endif /* PLAYER_H_ */
