#include<iostream>
#include<sstream>

using namespace std;

int main() {

	string name = "jacob";
	int age = 32;

	stringstream ss;

	ss << "Name is : ";
	ss << name;
	ss << "; Age is : ";
	ss << age;
	//string person = "Name is " + name + "; Age is " + age;


	string person = ss.str();

	cout << person << endl;

	cin.get();

	

}