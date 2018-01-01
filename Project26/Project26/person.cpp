#include<iostream>
#include<string>
#include<sstream>
#include "person.h"

using namespace std;

person::person()
{
	name = "underfined";
	age = 0;

}
person::person(string newName, int newAge) {

	name = newName;
	age = newAge;

}

string person::toString() {

	stringstream ss;

	ss << "Name of new user is : ";
	ss << name;
	ss << "; The age of the new user is : ";
	ss << age;
	
	return ss.str();
}

