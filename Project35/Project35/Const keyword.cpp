#include<iostream>
#include<string>
using namespace std;

class Animal {

private:

	string name;

public:

	void setName(string name) { this->name = name; }
	void speak() const { cout << "My name is : " << name << endl; }
};


int main() {

	const double PI = 3.1456789;
	cout << "The value of PI is: " << PI << endl;

	Animal animal;
	animal.setName("Jacob");
	animal.speak();

	int value = 10;

	int *pValue = &value;
	cout << *pValue << endl;

	int number = 11;
	pValue = &number;//Error if int * const pValue = &value;
	*pValue = 12;//Error if const int *pValue = &value;

	cout << *pValue << endl;


	cin.get();

	return 0;
}