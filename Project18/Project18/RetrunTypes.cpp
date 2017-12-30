//A simple program to demonstrate the  use of return

#include<iostream>

using namespace std;

void userLogging() {

	cout << "1. Enter the username and password" << endl;
	cout << "2. Enter the samples info" << endl;
	cout << "3. quitting ... " << endl;

}

int processOptions() {

	cout << "Enter the sample informations" << endl;
	
	int input;
	cin >> input;

	return input;
}

int main() {

	userLogging();

	int selection = processOptions();

	switch (selection) {

	case 1:
		cout << "User credentials entered" << endl;
		break;

	case 2:
		cout << "The samples are being processed" << endl;
		break;

	case 3:
		cout << "Quitting the application" << endl;
		break;

	default:

		cout << "Enter the selection from the menu" << endl;
	}

	system("pause");

	cin.get();
}
