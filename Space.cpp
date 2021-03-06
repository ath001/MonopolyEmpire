/*
 * Space.cpp
 *
 *  Created on: Feb 19, 2014
 *      Author: Anh
 */

#include "Space.h"
#include "Player.h"
#include <string>
#include <iostream>
using namespace std;

Space::Space( int place, std::string name ) : spot(place), title(name) {};
Ownable::Ownable( int place, std::string name ) : Space(place,name){
	owned = false;
};
int Ownable::owner = -1;
Space::~Space() {
	// TODO Auto-generated destructor stub
}
Ownable::~Ownable() {
	// TODO Auto-generated destructor stub
}

void Go::landOn() {
	std::cout << "LAND ON GO" << endl;
}







void EmpireSpace::landOn() {
	std::cout << "LAND ON EMPIRE SPACE" << endl;
}



void Chance::landOn() {
	std::cout << "LAND ON CHANCE" << endl;
}





void JustVisiting::landOn() {
	std::cout << "LAND ON JUST VISITING" << endl;
}

void JetBlue::landOn() {
	std::cout << "LAND ON JET BLUE" << endl;
}

void EA::landOn() {
	std::cout << "LAND ON EA SPORTS" << endl;
}

void ElectricCompany::landOn() {
	std::cout << "LAND ON Electric Company" << endl;
}

void HasBro::landOn() {
	std::cout << "LAND ON HasBro" << endl;
}

void UnderArmour::landOn() {
	std::cout << "LAND ON UNDER ARMOUR" << endl;
}

void Carnival::landOn() {
	std::cout << "LAND ON Carnival" << endl;
}

void Yahoo::landOn() {
	std::cout << "LAND ON YAHOO!" << endl;
}


void Paramount::landOn() {
	std::cout << "LAND ON PARAMOUNT" << endl;
}

void Chevrolet::landOn() {
	std::cout << "LAND ON CHEVROLET" << endl;
}

void EBay::landOn() {
	std::cout << "LAND ON EBAY" << endl;
}

void XGames::landOn() {
	std::cout << "LAND ON X GAMES" << endl;
}

void Ducati::landOn() {
	std::cout << "LAND ON DUCATI" << endl;
}

void Macdonalds::landOn() {
	std::cout << "LAND ON MACDONALDS" << endl;
}

void GoToJail::landOn() {
	std::cout << "LAND ON GO TO JAIL" << endl;
}

void Intel::landOn() {
	std::cout << "LAND ON INTEL" << endl;
}

void XBox::landOn() {
	std::cout << "LAND ON XBOX" << endl;
}

void WaterWorks::landOn() {
	std::cout << "LAND ON WATERWORKS" << endl;
}

void Nestle::landOn() {
	std::cout << "LAND ON NESTLE" << endl;
}

void Samsung::landOn() {
	std::cout << "LAND ON SAMSUNG" << endl;
}


void CocaCola::landOn() {
	std::cout << "LAND ON COCA COLA" << endl;
}

// void RivalTowerTax::landOn() {

// }



void Go::print() {
	std::cout << "LAND ON GO";
}



// void RivalTowerTax::print() {
// 	std::cout << "LAND ON RIVAL TOWER TAX" << endl;
// }



void EmpireSpace::print() {
	std::cout << "LAND ON EMPIRE SPACE";
}



void Chance::print() {
	std::cout << "LAND ON CHANCE";
}




void JustVisiting::print() {
	std::cout << "LAND ON JUST VISITING";
}

void JetBlue::print() {
	std::cout << "LAND ON JET BLUE";
}

void EA::print() {
	std::cout << "LAND ON EA SPORTS";
}

void ElectricCompany::print() {
	std::cout << "LAND ON Electric Company";
}

void HasBro::print() {
	std::cout << "LAND ON HasBro";
}

void UnderArmour::print() {
	std::cout << "LAND ON UNDER ARMOUR";
}

void Carnival::print() {
	std::cout << "LAND ON Carnival";
}

void Yahoo::print() {
	std::cout << "LAND ON YAHOO!";
}

void Paramount::print() {
	std::cout << "LAND ON PARAMOUNT";
}

void Chevrolet::print() {
	std::cout << "LAND ON CHEVROLET";
}

void EBay::print() {
	std::cout << "LAND ON EBAY";
}

void XGames::print() {
	std::cout << "LAND ON X GAMES";
}

void Ducati::print() {
	std::cout << "LAND ON DUCATI";
}

void Macdonalds::print() {
	std::cout << "LAND ON MACDONALDS";
}

void GoToJail::print() {
	std::cout << "LAND ON GO TO JAIL";
}

void Intel::print() {
	std::cout << "LAND ON INTEL";
}

void XBox::print() {
	std::cout << "LAND ON XBOX";
}

void WaterWorks::print() {
	std::cout << "LAND ON WATERWORKS";
}

void Nestle::print() {
	std::cout << "LAND ON NESTLE";
}

void Samsung::print() {
	std::cout << "LAND ON SAMSUNG";
}



void CocaCola::print() {
	std::cout << "LAND ON COCA COLA";
}



