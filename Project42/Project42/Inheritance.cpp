#include <iostream>
using namespace std;

class Phones {
public:
	void system() { cout << "Smart Phone" << endl; }
	void screen() { cout << "Touch screen" << endl; }
	void sensor() { cout << "3D touch sensor" << endl; }
	void camera() { cout << "12 megapixel camera" << endl; }
};

class IPhone : public Phones {
public:
	void model() { cout << "Model: iPhone 6S" << endl; }
	void OS() { cout << "Operating system: IOS" << endl; }
	void weight() { cout << "weight: 143g" << endl; }
	void thickness() { cout << "Thickness: 7.1mm" << endl; }
	void color1() { cout << "space grey" << endl; }
	void color2() { cout << "silver" << endl; }
	void color3() { cout << "gold" << endl; }
	void color5() { cout << "black" << endl; }
	void color4() { cout << "rose gold" << endl; }
	void performance() { cout << "Performance: Apple A9 64-bit dual-core CPU" << endl; }
	void cost() { cout << "Cost: £539 - £699" << endl; }

};

class Samsung : public IPhone {
public:
	void model() { cout << "Model: Samsung S6" << endl; }
	void OS() { cout << "Operating system: Android" << endl; }
	void weight() { cout << "Weight: 152g" << endl; }
	void thickness() { cout << "Thickness: 7.9mm" << endl; }
	void performace() { cout << "Performance: Exynos 8890 octa-core/Snapdragon 820 quad-core CPU" << endl; }
	void cost() { cout << "Cost: £569" << endl; }

};

int main() {
	cout << "!!!Hello People!!!" << endl;
	cout << "Specifications" << endl;
	// Phones phones;

	cout << "IPhone specifications" << endl;
	IPhone iphone;
	iphone.model();
	iphone.system();
	iphone.OS();
	iphone.weight();
	iphone.thickness();
	iphone.screen();
	iphone.camera();
	cout << "colors: " << endl;
	iphone.sensor();
	iphone.color1();
	iphone.color2();
	iphone.color3();
	iphone.color4();
	iphone.performance();
	iphone.cost();

	cout << "Samsung Specifications" << endl;
	Samsung s;
	s.model();
	s.system();
	s.OS();
	s.weight();
	s.thickness();
	s.screen();
	s.camera();
	cout << "Colors:" << endl;
	s.color2();
	s.color5();
	s.performance();
	s.cost();

	
	cin.get();
	return 0;
}