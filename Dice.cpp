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

}

int Dice::Roll( string name ){
	int dice1 = rand() % 6 + 1;
	int dice2 = rand() % 6 + 1;
	int sneaky_swap = -1;
	if ( dice1 == 1 ) {
		cout << name << " rolled a sneaky swap? 1.YES 2.NO:  ";
		cin >> sneaky_swap;
		if ( sneaky_swap == 1 ) {
			sneaky_swap = -1;
			return 0;
		} else {
			return dice2;
		}
	}
	return dice1+dice2;
}


