#include<iostream>
#include<string>

using namespace std;

class Frog {
	
private:

	string name;//Encapsulation of a string variable

private:

	string getName() { return name; }//Encapsulation of string method

public:

	Frog(string name) :name(name) {};
	void info() { cout << "My name is: " << getName() << endl; }

};

int main() {

	Frog frog("Freddy");
	frog.info();


	cin.get();
	return 0;

}