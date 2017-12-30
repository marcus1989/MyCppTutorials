
#include<iostream>
#include "Cat.h"

using namespace std;


void Cat::speak()
{
	if (happy) {
		cout << "meaow" << endl;
	}
	else {
		cout << "sssss" << endl;
	}
	
}

void Cat::color() {

	if (stripes) {
		cout << "Cat has beautiful strips" << endl;
	}
	else {
		cout << "Cat has no stripes" << endl;
	}
}

void Cat::makehappy(){
	happy = true;
}

void Cat::makesad() {
	happy = false;
}

void Cat::stripcolor() {

	stripes = true;
}
void Cat::nostripes() {

	stripes = false;
}

