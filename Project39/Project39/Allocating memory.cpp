#include<iostream>
#include<string>

using namespace std;

class Animal {

private:

	string name;

public:

	Animal() {}

	Animal(const Animal& other) : name(other.name) {

		cout << "Copy constructor created" << endl;
	}

	~Animal() {}

	void setName(string name) {

		this->name = name;
	}

	void speak() const {

		cout << "The animal is : " << name << endl;
	}
};

int main() {

	Animal *pAnimal = new Animal[26];

	char c = 'a';

	for (unsigned int i = 0; i < 26; i++, c++) {

		string name(1, c);
		pAnimal[i].setName(name);
		pAnimal[i].speak();

	}

	delete[] pAnimal;

	cin.get();
	return 0;

}