#include "sapmple.h"
#include<iostream>

using namespace std;

/*
void sapmple::check(double pval) {

	cout << "The value is : " << pval << endl;
}
*/

sapmple::sapmple()
{


	int val1 = 100;

	int *pointer1 = &val1;

	cout << "The int value is : " << val1 << endl;
	cout << "The value of Int using the pointer is : " << pointer1 << endl;
	cout << "The Int value using the pointer" << *pointer1 << endl;

	cin.get();


}


