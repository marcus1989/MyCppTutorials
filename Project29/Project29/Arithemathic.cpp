#include<iostream>

using namespace std;
/*
The different arithematic operations include:

+,
-,
*,
%
+=,
-=,
/=,
*=,
%=,
precedence,


*/
int main() {

	double value1 = (double)7/2;
	cout << "Double value : " << value1 << endl;

	int value2 = (int) 7.3;
	cout << "Int value : " << value2 << endl;

	int value3 = 8;
	value3 += 1;
	cout << "The value3 is : " << value3 << endl;

	int value4 = 10;
	value4 /= 5;
	cout << "The value4 is : " << value4 << endl;

	int value5 = 16 % 5;
	cout << "The value5 is : " << value5 << endl;

	double equation = ((5 / 4) % 2) + (2.3 * 6);
	cout << "Th value of equation is : " << equation << endl;
	

	cin.get();

	return 0;

	/*
	task 1:

	cout << "============================================" << endl;
	int dot;

	for (dot = 1; dot < 10000; dot++) {

		if (dot % 100 == 0) {

			cout << "." << endl;
		}

		cin.get();
		return 0;
	}
	*/


}