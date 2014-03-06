/*
 * Board.h
 *
 *  Created on: Feb 19, 2014
 *      Author: Anh
 */

#ifndef BOARD_H_
#define BOARD_H_
#include "Space.h"
#include "Player.h"
using namespace std;
class Board {
public:
	int peeps;
	Board( int player_num );
	virtual ~ Board();
	Space * spaces[36];
	Player ** players;
	void addNames();
	Player ** getPlayer();
};

#endif /* BOARD_H_ */
