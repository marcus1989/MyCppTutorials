#include<iostream>
#include<string>
#include "person.h"

using namespace std;

int main() {

	person person1;
	person person2("Bob");
	person person3("Jacob", 28);


	cout << person1.toString() << endl;
	cout << person2.toString() << endl;
	cout << person3.toString() << endl;

	cin.get();
	return 0;
}