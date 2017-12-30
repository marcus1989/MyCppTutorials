// A simple program to show the use of functions

#include<iostream>

using namespace std;

//function to store the initial prints

void userInputs() {

	cout << "1. Enter user name and password" << endl;
	cout << "2. Enter the sample to be analysed" << endl;
	cout << "3. quitting..." << endl;

}

//function to store the processing items

void processItems() {

	cout << "Enter a selection" << endl;

	int input;
	cin >> input;

	switch (input) {

	case 1:

		cout << "user credentials entered" << endl;
		break;

	case 2:

		cout << "samples entered for analysis" << endl;
		break;

	case 3:

		cout << "Quitting the user login" << endl;
		break;
	default:

		cout << "process done" << endl;

	}

}


int main() {

	userInputs();

	processItems();

	system("pause");

	return 0;



}