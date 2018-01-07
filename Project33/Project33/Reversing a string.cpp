#include<iostream>

using namespace std;

int main() {

	char name[] = "Jacob";
	
	int nchars = sizeof(name) - 1;

	char *pStart = name;
	char *pEnd = name + nchars - 1;

	while (pStart < pEnd) {
		
		char save = *pStart;
		*pStart = *pEnd;
		*pEnd = save;

		pStart++;
		pEnd--;
	}

	cout << name << endl;

	cin.get();

	return 0;

}