// Program to create variables in a cpp program

#include <iostream>
using namespace std;

int main() {

	int numberDogs = 5;
	int numberCats = 6;
	int numberAnimals = numberDogs + numberCats;

	cout << "The total number of animals in my home = " << numberAnimals << endl;
	numberDogs = numberDogs + 1;
	cout << " Total dogs in my home now = " << numberDogs << endl;
	numberAnimals = numberDogs + numberCats;
	cout << "Total number of animals in my home now = " << numberAnimals << endl;

	cin.get();

	return 0;

}