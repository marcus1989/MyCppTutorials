//Program to show the while, do-while loops and the difference between them

#include<iostream>
#include<string>

using namespace std;

int main() {

	/*int i = 0;

	while (i <= 5) {

		cout << "Hello" << i << endl;

		i++; // Increments i by 1
	}
	cout << "Quitting ... " << endl;
	*/

	const string password = "Enter";

	/*cout << "Enter the user password > " << flush;
	string input;
	//cin >> input;

	while (password != input) {

		cout << "Enter the password  > " << flush;
		cin >> input;

	}
	*/

	string input;

	do {

		cout << "Enter the password > " << flush;
		cin >> input;

		if (password != input) {

			cout << "Access denied" << endl;
		}
		cin.get();

	} while (password != input);

	cout << "password accepted" << endl;
	
	cin.get();

}

