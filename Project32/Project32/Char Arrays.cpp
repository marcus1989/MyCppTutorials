#include<iostream>

using namespace std;

int main() {

	//create a char string and output it

	//char text[] = { 'J','a','c', 'o', 'b' };
	char text[] = "Jacob";
	cout << text << endl;

	//Output all the chars with a for loop

	for (int i = 0; i < sizeof(text); i++) {

		cout << i << " : " << text[i] << endl;
	}

	//Output all the chars with a while loop

	int k = 0;

	while (true) {

		if (text[k] == 0) {
			break;
		}
		cout << text[k] << flush;
		k = k+1 ;

	}

	cin.get();

	return 0;
}