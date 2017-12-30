
#include<iostream>
#include<string>
#include "person.h"

using namespace std;

Person::Person() {

	name = "Jacob";
}

string Person::personName() {

	cout << "The name of the person is: " << flush;
	return name;
}

void Person::setName(string newName) {

	name = newName;
}

string Person::getName() {

	return name;
}
