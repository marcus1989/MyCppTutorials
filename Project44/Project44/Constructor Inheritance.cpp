#include<iostream>

using namespace std;

class Machine {

private:

	int id;

public:

	Machine(int id) : id(id) { cout << "This is a paremeterized machine constructor" << endl; }
	void info() { cout << "ID:" << id << endl; };

};

class Vehicle :public Machine {

public:

	Vehicle(int id) :Machine(id) { cout << "This is a paremeterized vehicle constructor" << endl; }

};

class Car :public Vehicle {

public:

	Car() : Vehicle(123) { cout << "Car no argument constructor called : " << endl; }
};

int main() {

	Car car;
	car.info();

	cin.get();
	return 0;
}