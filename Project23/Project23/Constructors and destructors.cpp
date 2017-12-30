#include<iostream>
#include"Cat.h"

using namespace std;

int main() {

	cout << "Initialiying the Cat program" << endl;
	{
		Cat bob;
		bob.speak();
	}
	cout << "Exiting the Cat program" << endl;

	system("pause");

}