#include<iostream>
#include"Cat.h"

using namespace std;

int main() {

	Cat jim;
	jim.makehappy();
	jim.speak();
	jim.color();
	jim.stripcolor();

	
	Cat bob; 
	bob.makesad();
	bob.speak();
	bob.nostripes();
	bob.color();


	cin.get();

	return 0;
}