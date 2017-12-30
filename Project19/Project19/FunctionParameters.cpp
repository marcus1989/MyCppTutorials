//A simple program to demonstrate the use of function parameters 

#include<iostream>

using namespace std;

void userInformation() {

	cout << "1. Enter the username and password" << endl;
	cout << "2. Enter the samples to be processed" << endl;
	cout << "3. quitting ..." << endl;

}

int userInput() {

	cout << "Enter the selection from menu" << endl;

	int input;
	cin >> input;

	return input;

}

void selectionProcess(int input) {

	switch (input) {

		case 1: 
			cout << "The user credentials are entered" << endl;
			break;

		case 2:
			cout << "The samples are being processed" << endl;
			break;

		case 3:
			cout << "Quitting the application" << endl;
			break;

		default:
			cout << "Enter the input from selection" << endl;
	}

}

int main() {

	userInformation();
	int selection  = userInput();
	selectionProcess(selection);

	system("pause");

	cin.get();


}