#include<iostream>
#include"person.h"
#include<string>

using namespace std;


int main() {

	person person1;
	person person2("Jacob", 28);
	person person3("BoB", 35);

	cout << person1.toString() << "; Memmory location : "<< &person1<< endl;
	cout << person2.toString() << "; Memmory location : " << &person2 << endl;
	cout << person3.toString() << "; Memmory location : " << &person3 << endl;
	cin.get();
	return 0;
}