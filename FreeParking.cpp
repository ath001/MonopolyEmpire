#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;


void FreeParking::landOn(Player &curPlayer) {
	int ans;
	int destination;
	cout << "LAND ON FREE PARKING" << endl;
	cout << "Do you want to pay 100 to move to any space? "
	     << "1.Yes "
		 << "2.No";
	cin >> ans; 
	while (ans < 1 || ans > 2)
	{
		cout << "Invalid answer! Please choose again: ";
		cin >> ans;
	}
	
	if (ans == 1)
	{
		curPlayer.changeMoney(-100);
		cout << "Where would you like to go to?"
			 << "0. Go"
			 << "1. Nerf"
			 << "2"
			 << "3";
		cin >> destination;
		while (destination < 0 || destination > 35)
		{
			cout << "Invalid position! Please try again: ";
			cin >> destination;
		}
		curPlayer.setGlobal (destination);		
	}
	
	else 
		cout << "Continue your turn as usual.";
}

void FreeParking::print() {
	cout << "LAND ON FREE PARKING" << endl;
}


