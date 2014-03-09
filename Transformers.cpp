#include <iostream>
#include <stdio.h>
#include "Space.h"
#include "Tower.h"
using namespace std;




Transformers::Transformers( int brand, std::string name, int value ) : Ownable( brand, name){
		bboard = new BillBoard( value, name, owned );	
	}
void Transformers::buy(Player& curPlayer) {
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
		owned =true;

	} else {
		cout << curPlayer.getName() << " did not buy " << title << "." << endl;
	}
	// std::cout << bboard->getValue() << 	"HERE";
	// curPlayer.getTower()->Top_BillBoard.top();


}

void Transformers::print() {
	std::cout << "LAND ON Transformers";
}

void Transformers::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON Transformers"<< endl;
	if ( owned == false ) {
		buy(curPlayer);
	}
}
BillBoard* Transformers::getBillBoard() {
	return bboard;
}