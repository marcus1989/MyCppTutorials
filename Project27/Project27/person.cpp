#include "person.h"
#include<sstream>



person::person() : name(""), age(0) { //constructor list initialisation

	/*name = "";
	age = 0;

	cout << this << endl;
*/
}

person::person(string name, int age) {

	this->name = name;
	this->age = age;

	cout << this << endl;
}

string person::toString() {

	stringstream ss;

	ss << "Name : ";
	ss << name;
	ss << "; Age : ";
	ss << age;

	return ss.str();
}