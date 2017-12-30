#include<iostream>
#include"person.h"
#include<string>

using namespace std;

int main() {


	Person newperson;
	newperson.getName();
	newperson.setName("Jacquiline");
	cout << newperson.personName() << endl;

	cin.get();
}