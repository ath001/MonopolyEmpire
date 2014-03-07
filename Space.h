/*
 * Space.h
 *
 *  Created on: Feb 19, 2014
 *      Author: Anh
 */

#ifndef SPACE_H_
#define SPACE_H_
#include <string>
#include "Player.h"
using namespace std;

class Space {
//  protected:
//	int spot;
//	std::string title;

  public:
	Space( int, string);
    virtual void landOn(Player&){};
    virtual void print(void){};
	virtual ~Space();
	int spot;
	std::string title;


//    virtual void print() =0;
};


class Go: public Space {
public:
	Go( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Nerf: public Space {
public:
	Nerf( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};


class RivalTowerTax: public Space {
public:
	RivalTowerTax( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Transformers: public Space {
public:
	Transformers( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class EmpireSpace: public Space {
public:
	EmpireSpace( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Spotify: public Space {
public:
	Spotify( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Beats: public Space {
public:
	Beats( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Chance: public Space {
public:
	Chance( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Fender: public Space {
public:
	Fender( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class JustVisiting: public Space {
public:
	JustVisiting( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class JetBlue: public Space {
public:
	JetBlue( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class EA: public Space {
public:
	EA( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class ElectricCompany: public Space {
public:
	ElectricCompany( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class HasBro: public Space {
public:
	HasBro( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class UnderArmour: public Space {
public:
	UnderArmour( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Carnival: public Space {
public:
	Carnival( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Yahoo: public Space {
public:
	Yahoo( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class FreeParking: public Space {
public:
	FreeParking( int a, std::string b ) : Space(a,b){}
	void landOn(Player&);
	void print();
};

class Paramount: public Space {
public:
	Paramount( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Chevrolet: public Space {
public:
	Chevrolet( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class EBay: public Space {
public:
	EBay( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class XGames: public Space {
public:
	XGames( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Ducati: public Space {
public:
	Ducati( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Macdonalds: public Space {
public:
	Macdonalds( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class GoToJail: public Space {
public:
	GoToJail( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Intel: public Space {
public:
	Intel( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class XBox: public Space {
public:
	XBox( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class WaterWorks: public Space {
public:
	WaterWorks( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Nestle: public Space {
public:
	Nestle( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class Samsung: public Space {
public:
	Samsung( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class TowerTax: public Space {
public:
	TowerTax( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

class CocaCola: public Space {
public:
	CocaCola( int a, std::string b ) : Space(a,b){}
	void landOn();
	void print();
};

#endif /* SPACE_H_ */
