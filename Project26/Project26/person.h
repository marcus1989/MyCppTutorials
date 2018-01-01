#pragma once


#include<iostream>
using namespace std;

class person
{

private:

	string name;
	int age;

public:
	person();
	person(string newName) { name = newName; age = 0; };
	person(string newName, int newAge);
	string toString();
	
};

