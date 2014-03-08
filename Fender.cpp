#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void Fender::buy() {
	std::cout << "BUY" << endl ;
}

void Fender::print() {
	std::cout << "LAND ON FENDER"<< endl;
}

void Fender::landOn() {
	Fender::buy();
}