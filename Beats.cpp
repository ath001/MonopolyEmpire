#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void Beats::buy() {
	std::cout << "BUY" << endl ;
}

void Beats::print() {
	std::cout << "LAND ON BEATS"<< endl;
}

void Beats::landOn() {
	Beats::buy();
}