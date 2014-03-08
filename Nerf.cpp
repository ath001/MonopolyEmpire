#include <iostream>
#include <stdio.h>
#include "Space.h"
#include "Tower.h"
using namespace std;




Nerf::Nerf( int brand, std::string name, int value ) : Ownable( brand, name){
		bboard = new BillBoard( value, brand );	
	}
void Nerf::buy(Player& curPlayer) {
	std::cout << "BUY" ;
	// std::cout << bboard->getValue() << 	"HERE";
	// curPlayer.getTower()->Top_BillBoard.top();
	curPlayer.getTower()->setBillBoard( ( *bboard) );
	curPlayer.getTower()->setHeight( (*bboard).getValue() );
	cout << (*bboard).getValue() << "VALUE" << endl ;
}

void Nerf::print() {
	std::cout << "LAND ON NERF";
}

void Nerf::landOn(Player& 	curPlayer) {
	std::cout << "LAND ON NERF"<< endl;
	buy(curPlayer);
}
BillBoard* Nerf::getBillBoard() {
	return bboard;
}