#include <iostream>
#include <stdio.h>
#include "Space.h"
#include "Tower.h"
using namespace std;




Nerf::Nerf( int brand, std::string name, int value ) : Ownable( brand, name){
		bboard = new BillBoard( value, name, owned );	
		// cout<< this << "THISSSSS" << endl ;
		// cout<< this.owned << "THISISS2222";
	}
void Nerf::buy(Player& curPlayer) {
	int ans;

	std::cout << "Do you want to buy " <<title << " for 50?" << endl ;

	cout << "1. Yes 2. No" << endl;
	cin >> ans;

	if ( ans == 1 ) {
		cout << "You bought " << title << "." << endl;
		curPlayer.changeMoney( -50 );
			curPlayer.getTower()->setBillBoard( ( bboard) );
		curPlayer.getTower()->setHeight( (*bboard).getValue() );
		cout << (*bboard).getValue() << "VALUE" << endl ;
		cout << curPlayer.getTower()->getHeight() << "HEIGHT" << endl;	
		owned = true;
	} else {
		cout << curPlayer.getName() << " did not buy " << title << "." << endl;
	}
	// std::cout << bboard->getValue() << 	"HERE";
	// curPlayer.getTower()->Top_BillBoard.top();


}

void Nerf::print() {
	std::cout << "LAND ON NERF";
}

void Nerf::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON NERF"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	}
}
BillBoard* Nerf::getBillBoard() {
	return bboard;
}