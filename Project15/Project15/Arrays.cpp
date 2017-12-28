//A simple program to show one dimentional and mulidimentional arrays

//one-dimentional array

/*#include<iostream>
#include<string>

using namespace std;

int main() {

	string animals[] = { "cat","dog","tiger","lion"};
	int i;

	cout << sizeof(animals) << endl;
	cout << sizeof(string) << endl;

	for (i = 0; i < 4; i++) {

		cout << animals[i] << " " << flush;
	}

	for (i = 0; i < sizeof(animals) / sizeof(string); i++) {

		cout << animals[i] << " " << flush;
	}

	cin.get();

	return 0;
}
*/

//Two-dimensional array - multiplication table for numbers from 1-10

#include<iostream>

using namespace std;

int main() {

	int matrix[100][100];

	for (int i = 1; i <= 10 ; i++) {

		for (int j = 1; j <= 10; j++) {

			matrix[i][j] = i * j;

		}
	
	}
	
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {

			cout << j << "*" << i << "=" << matrix[i][j] << endl;
		}
	}
	system("pause");
	
	cin.get();

	return 0;

}
