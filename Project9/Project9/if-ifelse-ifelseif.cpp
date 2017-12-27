// A simple program to show all the if, if - else and if - elseif cases.

//if condition - Basic program//
#include<iostream>
#include<string>

using namespace std;

int main() {

	string password = "Hello";
	cout << "Enter your password > " << flush;
	string input;
	cin >> input;

	if (input == password) {

		cout << "Access accepted" << endl;
	}
// if - else condition //

	cout << "1.\tUser logged in" << endl;
	cout << "2.\tNew samples added" << endl;
	cout << "3.\tsample analysis report" << endl;
	cout << "4.\tQuit the application" << endl;

	cout << "Enter the number > " << flush;
	int number;
	cin >> number;

	if (number < 3) {

		cout << "Permission denied ... " << endl;
		cin.get();
	}
	else {

		cout << "Permission granded ... " << endl;
		cin.get();
	}

	if (number == 1) {

		cout << "The lab technician has entered the system" << endl;
		cin.get();
	}

	else if (number == 2) {

		cout << "New samples analysis report is now available the system by lab technician" << endl;
		cin.get();
	}

	else if (number == 3) {

		cout << "New samples for preservation has been entered to the system by lab technician" << endl;
		cin.get();
	}

	else { 

		cout << "quitting the application ... " << endl;
		cin.get();
	}
	cin.get();

}