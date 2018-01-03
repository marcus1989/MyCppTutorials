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
	person(string name, int age);
	string toString();
	
};

