#include<iostream>
#include<string>

using namespace std;

class Animal {

private:
	string name;

public:

	Animal() {
		cout << "Animal created:" << endl;
	};

	Animal(const Animal& other) : name(other.name) {

		cout << "Animal created by copying :" << endl;
	};

	~Animal() {

		cout << "The destructor created" << endl;
	};

	void setName(string name) {
		
		this->name = name;

	};

	void speak() {

		cout << "My name is : " << name << endl;
	};
};

int main() {

	Animal *pCat = new Animal();
	pCat->setName("freddy");
	pCat->speak();
	delete pCat;
	
	cin.get();
	return 0;

}