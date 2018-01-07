#include<iostream>
#include<string>
using namespace std;

int main() {

	const int elements = 5;
	string numbers[elements] = { "one","two","three","four","five" };
	string *ptext = numbers;
	cout << *ptext << endl;


	ptext += 3;
	cout << *ptext << endl;

	ptext -= 2;
	cout << *ptext << endl;

	string *pEnd = &numbers[elements - 1];
	cout << *pEnd << endl;

	ptext = &numbers[0];
	cout << ptext << endl;


	while (ptext != pEnd) {
		cout << *ptext << endl;
		ptext++;
	}

	cout << *ptext << endl;
	cout << endl;

	//set ptext back to start

	ptext = &numbers[0];

	cout << *ptext << endl;
	cout << *pEnd << endl;

	long newelements = (long) (pEnd - ptext);
	cout << newelements << endl;

	cout << endl;

	//set ptext back to start

	ptext = &numbers[0];
	ptext += elements/2;

	cout << *ptext << endl;


	cin.get();

	return 0;

}