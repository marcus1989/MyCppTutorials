// A program to demostrate Strings

#include <iostream>
#include<string>
using namespace std;

int main() {

	string value1 = "snow";
	string value2 = "ball";
	string value3 = value1 + value2;

	cout << "the first word is : " << value1 << endl;
	cout << "the last word is : " << value2 << endl;
	cout << "The word is : " << value3 << endl;

	cin.get();
}