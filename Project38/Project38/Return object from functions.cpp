#include<iostream>
#include<string>

using namespace std;

class Animal {

private:

	string name;

public:

	Animal() {

		cout << "Animal created" << endl;
	}

	Animal(const Animal& other) : name(other.name) {

		cout << "the copy constructor created" << endl;
	}

	~Animal() {

		cout << "The destructor created" << endl;
	}
	
	void setName(string name) {

		this->name = name;
	}

	void speak() const {

		cout << "The name is: " << name << endl;
	}


};

Animal *createAnimal() {

	Animal *pAnimal = new Animal();
	pAnimal->setName("Beatrix");
	return pAnimal;

}


int main() {

	Animal *pFrog = createAnimal();
	pFrog->speak();
	delete pFrog;
	cin.get();
	return 0;


}