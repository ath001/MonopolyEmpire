/*
 * Board.cpp
 *
 *  Created on: Feb 19, 2014
 *      Author: Anh
 */

#include "Board.h"
#include <iostream>
#include <stdio.h>

using namespace std;

Board::Board( int player_num ) {

	peeps = player_num;
	Player * set_players[player_num];
//	set_players[0] = new Player("John");
	players = set_players;

//	std::cout << "I'm IN " << endl;
	string str0 = "GO";
	string str1 = "NERF";
	string str2 = "RIVAL TOWER TAX";
	string str3 = "TRANSFORMERS";
	string str4 = "EMPIRE SPACE";
	string str5 = "SPOTIFY";
	string str6 = "CHANCE";
	string str7 = "BEATS";
	string str8 = "FENDER";
	string str9 = "JUST VISITING";
	string str10 = "JET BLUE";
	string str11 = "EA SPORTS";
	string str12 = "ELECTRIC COMPANY";
	string str13 = "HASBRO";
	string str14 = "UNDER ARMOUR ";
	string str15 = "CHANCE";
	string str16 = "CARNIVAL";
	string str17 = "YAHOO!";
	string str18 = "FREE PARKING";
	string str19 = "PARAMOUNT";
	string str20 = "CHEVROLET";
	string str21 = "CHANCE";
	string str22 = "EBAY";
	string str23 = "X GAMES";
	string str24 = "EMPIRE SPACE";
	string str25 = "DUCATI";
	string str26 = "MACDONALDS";
	string str27 = "GO TO JAIL";
	string str28 = "INTEL";
	string str29 = "XBOX";
	string str30 = "WATER WORKS";
	string str31 = "NESTLE";
	string str32 = "CHANCE";
	string str33 = "SAMSUNG";
	string str34 = "TOWER TAX";
	string str35 = "COCA COLA";

	Space * space0 = new Go( 0, str0 );
	Space * space1 = new Nerf( 1, str1 );
	Space * space2 = new RivalTowerTax( 3, str2 );
	Space * space3 = new Transformers( 3, str3 );
	Space * space4 = new EmpireSpace( 4, str4 );
	Space * space5 = new Spotify( 5, str5 );
	Space * space6 = new Chance( 6, str6 );
	Space * space7 = new Beats( 7, str7 );
	Space * space8 = new Fender( 8, str8 );
	Space * space9 = new JustVisiting( 9, str9 );
	Space * space10 = new JetBlue( 10, str10 );
	Space * space11 = new EA( 11, str11 );
	Space * space12 = new ElectricCompany( 12, str12 );
	Space * space13 = new HasBro( 13, str13 );
	Space * space14 = new UnderArmour( 14, str14 );
	Space * space15 = new Chance( 15, str15 );
	Space * space16 = new Carnival( 16, str16 );
	Space * space17 = new Yahoo( 17, str17 );
	Space * space18 = new FreeParking( 18, str18 );
	Space * space19 = new Paramount( 19, str19 );
	Space * space20 = new Chevrolet( 20, str20 );
	Space * space21 = new Chance( 21, str21 );
	Space * space22 = new EBay( 22, str22 );
	Space * space23 = new XGames( 23, str23 );
	Space * space24 = new EmpireSpace( 24, str24 );
	Space * space25 = new Ducati( 25, str25 );
	Space * space26 = new Macdonalds( 26, str26 );
	Space * space27 = new GoToJail( 27, str27 );
	Space * space28 = new Intel( 28, str28 );
	Space * space29 = new XBox( 29, str29 );
	Space * space30 = new WaterWorks( 30, str30 );
	Space * space31 = new Nestle( 31, str31 );
	Space * space32 = new Chance( 32, str32 );
	Space * space33 = new Samsung( 33, str33 );
	Space * space34 = new TowerTax( 34, str34 );
	Space * space35 = new CocaCola( 35, str35 );

	spaces[0] = space0;
	spaces[1] = space1;
	spaces[2] = space2;
	spaces[3] = space3;
	spaces[4] = space4;
	spaces[5] = space5;
	spaces[6] = space6;
	spaces[7] = space7;
	spaces[8] = space8;
	spaces[9] = space9;
	spaces[10] = space10;
	spaces[11] = space11;
	spaces[12] = space12;
	spaces[13] = space13;
	spaces[14] = space14;
	spaces[15] = space15;
	spaces[16] = space16;
	spaces[17] = space17;
	spaces[18] = space18;
	spaces[19] = space19;
	spaces[20] = space20;
	spaces[21] = space21;
	spaces[22] = space22;
	spaces[23] = space23;
	spaces[24] = space24;
	spaces[25] = space25;
	spaces[26] = space26;
	spaces[27] = space27;
	spaces[28] = space28;
	spaces[29] = space29;
	spaces[30] = space30;
	spaces[31] = space31;
	spaces[32] = space32;
	spaces[33] = space33;
	spaces[34] = space34;
	spaces[35] = space35;

}

void Board::addNames() {
    string * string_name = new string[peeps];

	for ( int x =0; x< peeps ;x++ ) {
		cout << "Enter player name: ";
		cin >> string_name[x];
	}

//	for ( int x = 0; x< peeps; x++ ) {
//		cout << string_name[x];
//	}

	for ( int x=0; x<peeps; x++ ) {
		players[x] = new Player( string_name[x] );
	}

//	while (scanf("%d", &num_players) == 0 ) {
//			printf("Error-Please in type a number between 1 and 4: ");
//			do {
//				num_players = getchar();
//			}
//			while (!isdigit(num_players) );
//			ungetc( num_players, stdin);
//			//consume non-numeric chars from buffer
//		}
//	players[0] = new Player("John");

}


Player ** Board::getPlayer() {
	return players;
}

//void Board::displayLocation(){
//	for ( int x=0; x<spaces,;x++) {
//
//	}
//}
Board::~Board() {
	std::cout << "Test BOARD Deconstructor!";
}

