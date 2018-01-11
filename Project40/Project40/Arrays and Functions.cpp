#include<iostream>
#include<string>

using namespace std;


//1. using Array
void show1(const int nElements, string texts[]) {

	//cout<<sizeof(texts)<<endl; -- returns sizeof pointer
	for (int i = 0; i < nElements; i++) {

		cout << texts[i] << endl;
	}
}


//2. Using pointer
void show2(const int nElements, string *texts) {

	//cout<<sizeof(texts)<<endl; 
	for (int i = 0; i < nElements; i++) {

		cout << texts[i] << endl;
	}
}

//3. Reference to an array

void show3(string (&texts)[3]) {

	//cout<<sizeof(texts)<<endl; -- returns sizeof pointer
	for (int i = 0; i < sizeof(texts)/sizeof(string); i++) {

		cout << texts[i] << endl;
	}
}

int main() {

	string texts[] = { "apple","orange","banana" };
	cout << sizeof(texts) << endl;
	show3(texts);

	cin.get();
	return 0;

}