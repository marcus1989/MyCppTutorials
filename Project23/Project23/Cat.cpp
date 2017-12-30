#include<iostream>
#include "Cat.h"

using namespace std;


Cat::Cat() {

	cout << "Cat born" << endl;
	happy = true;
}

Cat::~Cat() {

	cout << "Cat destroyed" << endl;

}
void Cat::speak() {

	if (happy) {

		cout << "Meaowww" << endl;
	}
	else {

		cout << "sssss" << endl;
	}

}




