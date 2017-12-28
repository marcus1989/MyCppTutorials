//A simple program to show the use of switch statements

#include<iostream>

using namespace std;

int main() {

	int value;

	cin >> value;

	switch (value) {

	case 4:
		cout << "The value is 4" << endl;
		break;

	case 5:
		cout << "The value is 5" << endl;
		break;

	case 6:
		cout << "The value is 6" << endl;
		break;
	}
	
	system("pause");

	cin.get();

	return 0;
	}
