//A simple program to showcase different floating poin datatypes

#include<iostream>
#include<iomanip>
using namespace std;

int main() {

	float fvalue = 12.3456;
	//cout << sizeof(fvalue) << flush;
	cout << "The floaing point number entered is : " << fvalue << endl;
	cout << "The new floaing point number entered is : " << setprecision(20) << fvalue << endl;
	

	double dvalue = 12.34567890123456;
	//cout << sizeof(dvalue) << flush;
	cout << "The double number entered is : " << dvalue << endl;
	cout << "The new double number entered is : " << setprecision(20) << dvalue << endl;

	long double ldvalue = 12.3456890123456;
	//cout << sizeof(ldvalue) << flush;
	cout << "The long double number entered is : " << ldvalue << endl;
	cout << "The new long double number entered is : " << setprecision(20) << ldvalue << endl;


	cin.get();

}