// A simple program to show all the different cpp conditions

#include<iostream>

using namespace std;

/*
equality test (==)
not equals (!=)
less than (<)
greather than (>)
AND operator (&&)
OR operator (||)
*/

int main() {

	int value1 = 5;
	int value2 = 9;
	string name = "Jacob";
	string family = "ambat";

	if (value1 == 5) {

		cout << "Condition 1 : True" << endl;
	}

	else {
		cout << "Condition 1 : False" << endl;
	}

	if (value2 != value1) {

		cout << "Condition2 : True" << endl;
	}

	else if (value2 < value1) {

		cout << "Condition2 : False" << endl;

	}

	else {

		cout << "Condition2 : True" << endl;
	}

	if (name == "Jacob" && name != family) {

		cout << "Condition3 : True" << endl;
	}

	else if (value1 <= 5 || name == "Marcus") {
		
		cout << "Condition3 : True" << endl;

	}

	else {

		cout << "Condition3 : False" << endl;
	}

	bool condition1 = (value1 > 3 && value1 < value2) || (name == "Jacob" || family == "Marcus");
	bool condition2 = (value1 == value2 || value2 >= 10) && (name == "jacob" && family == "Ambat");

	if (condition1 || condition2) {

		cout << "Condition4 : True" << endl;
	}

	else {

		cout << "Condiion4 : False" << endl;
	}

	cin.get();
}