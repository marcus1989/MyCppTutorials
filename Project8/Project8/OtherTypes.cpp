// A simple program o showcase other primiive datatypes

#include<iostream>

using namespace std;

int main() {

	bool bvalue = true;
	cout << "The bool value is : " << bvalue << endl;
	
	char cvalue = 'g';
	cout << "The charector entered is : " << cvalue << endl;

	char c1value = '7';
	cout << "The charector entered is : " << c1value << endl;

	char c2value = '123';
	cout << "The charector entered is : " << int(c2value) << endl;

	char c3value = 123;
	cout << "The charector entered is : " << int(c3value) << endl;

	wchar_t wvalue = 'wow';
	cout << "The long charector entered is : " << wvalue << endl;


	cin.get();
}