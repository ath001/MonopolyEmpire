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
	Player * players;
	int num_player;

public:
	Player( string input, Player***, int );
	virtual ~Player();
	string getName();
	int getPosition();
	void setPostion( int );
	int getTowerValue();
	void changeMoney( int );
	int getMoney();
	void setGlobal(int);
	Tower * getTower();
	void sneakySwap(Player&);
	Player * getPlayers();
};

#endif /* PLAYER_H_ */
