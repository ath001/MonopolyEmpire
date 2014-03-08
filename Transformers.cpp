#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void Transformers::buy() {
	std::cout << "BUY" << endl ;
}

void Transformers::print() {
	std::cout << "LAND ON NERF"<< endl;
}

void Transformers::landOn() {
	Transformers::buy();
}