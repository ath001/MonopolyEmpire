#include "BillBoard.h"
#include <string>

BillBoard::BillBoard( int ValueOf, string NameOf, bool& owned ) : value(ValueOf), name(NameOf) {
	reset = &owned;
};

int BillBoard::getValue() {
	return value;
}


string BillBoard::getName() {
	return name;
}

void BillBoard::setStatus( bool set) {
	(*reset) = set;
} 

BillBoard::~BillBoard() {}
