#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void TowerTax::print() {
	std::cout << "LAND ON TOWER TAX"<< endl;
}



void TowerTax::landOn(Player &curPlayer) {
	print();
	// curPlayer.getTower()->Top_BillBoard.pop
	if ( curPlayer.getTower()->getHeight() > 0 ) {
	BillBoard * temp_bb = curPlayer.getTower()->Top_BillBoard.top();
	cout << curPlayer.getName() << " loses his BillBoard: " << temp_bb->getName()<< "." << endl;

	// BillBoard * point_bb = &temp_bb;
	curPlayer.getTower()->Top_BillBoard.pop();
	cout << curPlayer.getTower()->getHeight() << "HEIGHT_ before";

	curPlayer.getTower()->setHeight( -(temp_bb->getValue() ) );
	cout << curPlayer.getTower()->getHeight() << "HEIGHT_ after";
	// Space * temp_space = temp_bb.getLocation();
	// cout << temp_bb->getLocation() << endl;
	temp_bb->setStatus( false );
	// temp_bb->getStatus() = false;
	
	} else {
		cout << curPlayer.getName() <<" can not be be taxed anymore." << endl;
	}


}
