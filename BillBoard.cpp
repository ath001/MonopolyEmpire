#include "BillBoard.h"

BillBoard::BillBoard( int ValueOf, int BrandOf ) : value(ValueOf), brand(BrandOf){};

int BillBoard::getValue() {
	return value;
}

int BillBoard::getBrand() {
	return brand;
}

BillBoard::~BillBoard() {}
