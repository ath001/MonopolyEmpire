#include <iostream>
#include <string>
#include <stdio.h>
#include "Board.h"
#include "Space.h"
#include "Dice.h"
using namespace std;
int main()
    // added a lined
    // ADDING ONE MORE
    // Added Anthony
    // testing
{
	cout << "Welcome to Monopoly Empire!" << endl << "Enter the number of players(1-4): ";

	int num_players = 0;

	while (scanf("%d", &num_players) == 0 || num_players > 4 || num_players < 1) {
		printf("Error-Please in type a number between 1 and 4: ");
		do {
			num_players = getchar();
		}
		while (!isdigit(num_players) );
		ungetc( num_players, stdin);
		//consume non-numeric chars from buffer
	}

	Board * board= new Board( num_players ); // Start the game with this many players
	Dice dice;

	board->addNames(); // Adds players Names to the game
	cout << (board->players[0]->getName()) << endl;
	cout << "GAME STARTED!" << endl;
	Player ** player = board->getPlayer();
	cout << board->players[0]->getTowerValue() <<"HOW MUCH";
	int round = 0;
	for ( int i=0;i<100;i++) {
	round = round % board->peeps;
	int num_rolled = dice.Roll( player[round]->getName() );
	cout << player[round]->getName() << " moves " << num_rolled << " spaces: ";
	player[round]->setPostion( num_rolled );
//	cout << board->players[round]->getPosition() << "CURRENT";
	board->spaces[player[round]->getPosition()]->landOn();
	cout << player[round]->getMoney()<< "and " << player[round]->getPosition()<<endl;
	round++;
	}
//	space0->landOn();
//	a.bar = 3;
//	a.foo();
//	cout << "Hello World!" << a.bar;
	delete board;
}



