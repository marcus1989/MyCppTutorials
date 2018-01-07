#include<iostream>
#include<string>

using namespace std;

class Animal {

private:

	string name;
public:

	Animal() { cout << "Animal created " << endl; };
	Animal(const Animal &other) :name(other.name) { cout << "Animal created by copying." << endl; };
	void setName(string name) { this->name = name; };
	void speak() { cout << "My name is: " << name <<endl; }

};

int main() {

	Animal animal1;
	animal1.setName("Jacob");
	Animal animal2 = animal1;
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();


	Animal animal3(animal1);
	animal3.speak();
	cin.get();
	
	return 0;
}