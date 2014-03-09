/*
 * Dice.cpp
 *
 *  Created on: Feb 21, 2014
 *      Author: Anh
 */

#include "Dice.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string>

using namespace std;


Dice::Dice() {
	srand (time(NULL));
	sneaky_swapping = false;
	is_double = false;

}

int Dice::Roll( Player* curPlayer ){
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	sneaky_swapping = false;
	is_double = false;
	int sneaky_swap = -1;
	if ( dice1 == 1 ) {
		cout << curPlayer->getName() << " rolled a sneaky swap? 1.YES 2.NO:  ";
		cin >> sneaky_swap;
		if ( sneaky_swap == 1 ) {
			sneaky_swapping = true;
			sneaky_swap = -1;
			return 0;
		} else {
			return dice2;
		}
	}
	if ( dice1 == dice2 ) {
		is_double = true;
	}
	return dice1+dice2;
}

bool Dice::isSneaky() {
	return sneaky_swapping;
}

bool Dice::isDouble() {
	return is_double;
}


