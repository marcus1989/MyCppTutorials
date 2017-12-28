// A simple program to compare different float values

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	float value = 1.1;

	if (value < 1.11) {

		cout << "equals" << endl;

	}

	else {

		cout << "not equal" << endl; //The program gives a "not equal" when value == 1.1. This is because of the approximation for floating point numbers.

	}

	cout << setprecision(10) << value << endl;

	cin.get();
}