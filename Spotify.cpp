#include <iostream>
#include <stdio.h>
#include "Space.h"
using namespace std;

void Spotify::buy() {
	std::cout << "BUY" << endl ;
}

void Spotify::print() {
	std::cout << "LAND ON SPOTIFY"<< endl;
}

void Spotify::landOn() {
	Spotify::buy();
}