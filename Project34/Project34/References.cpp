#include<iostream>

using namespace std;

void changethevalue(double &value) {

	value = 4.234;
}

int main() {

	int value1 = 10;
	int &value2 = value1;//value2 is the sreference variable
	value2 = 15;

	cout << "value1 is:" << value1 << endl;
	cout << "value2 is:" << value2 << endl;

	double value = 13.45;
	changethevalue(value);
	cout << "the double value is:" << value << endl;

	cin.get();
	return 0;

}