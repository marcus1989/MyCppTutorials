#include<iostream>
#include"sapmple.h"
#include "pointers.h"

using namespace std;

void manipulate(double *pvalue) {

	cout << "The value of double in manipulate : " << *pvalue << endl;
	*pvalue = 10.0;
	cout << "The value of double in manipulate : " << *pvalue << endl;


}
int main() {


	int newval = 10;

	int *val = &newval;

	cout << "Int value : " << newval << endl;
	cout << "The pointer to the Int value : " << val << endl;
	cout << "The Int value via pointer is : " << *val << endl;

	

	cout << "==============================" << endl;

	double newval1 = 12;
	cout << "The newval1 is : " << newval1 << endl;
	manipulate(&newval1);
	cout << "The newval1 is : " << newval1 << endl;


	cout << "==============================" << endl;

	sapmple();
	


	cin.get();

	return 0;


}