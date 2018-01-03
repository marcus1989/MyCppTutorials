#include<iostream>
#include<exception>
#include<string>

using namespace std;


int main() {

	try {
		
		
		string items[] = { "jacob", "marcus","ambat" };
		string *pitem = items;

		//cout << pitem << endl;

		//cout << sizeof(items) << endl;
		// << sizeof(string) << endl;

		//Loop through an array using a pointer, with array element reference syntax
		for (int i = 0; i < sizeof(items) / sizeof(string); i++) {

			cout << " " << pitem[i] << flush;
		}

		cout << endl;

		//Loop through an array by incrementing a pointer
		for (int i = 0; i < sizeof(items) / sizeof(string); i++, pitem++) {

			cout << " " << *pitem << flush;
		}

		cout << endl;
		//Loop through an array, stopping by comparing two positions

		string *pstart = &items[0];
		string *pend = &items[2];

		while (true) {

			cout << " " << *pstart << flush;

			if (*pstart == *pend) {

				break;
			}
			
			pstart++;
		}
	}
	catch (exception e) {

		cout << "Standard Exception : " << e.what() << endl;
	}

	cin.get();

	return 0;

}