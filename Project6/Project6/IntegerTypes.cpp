// A simple program to showcase different Integer types
#include<iostream>
#include<limits>
using namespace std;

int main() {

	int value = -23456;
	cout << "The integedr value is : " << value << endl;
	cout << "The maximum integer value is : " << INT_MAX << endl;
	cout << "The minimum integer value is : " << INT_MIN << endl;

	long int lvalue = 1234567890;
	cout << "The number entered is : " << lvalue << endl;

	short int svalue = 12345;
	cout << "The number entered is : " << svalue << endl;

	cout<<sizeof(int)<<endl;
	cout<<sizeof(long int)<<endl;
	cout<<sizeof(short int)<<endl;

	unsigned int uvalue = 1234567890;
	cout << "The unsigned number entered is : " << uvalue << endl;

	cin.get();

}