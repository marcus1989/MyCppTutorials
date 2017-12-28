// A simple program to show the use of break and continue in loops

#include<iostream>
#include<string>

using namespace std;

/*int main() {

	int i;
	
	for (i = 0; i <= 5; i++) {

		if (i > 3) {
			break;
		}

		cout << "hello" << endl;
		cin.get();
	}

	return 0;
}
*/

/*int main() {

	int i;

	for (i = 0; i < 5; i++) {


		cout << "Hello there .... " <<i<< endl;

		if (i == 2) {
			continue;
		}
		cout << "looping" << endl;
	}

	cout << "quitting..." << endl;
	cin.get();

	return 0;
}
*/

int main() {

	const string password = "Enter";

	string input;
	
	do {

		cout << "Enter the user password > " << flush;
		cin >> input;

		if (input == password) {

			break;
		}
		else {

			cout << "Access denied" << endl;
		}
	} while (true);
	
	cout << "password accepted" << endl;

	cin.get();
}