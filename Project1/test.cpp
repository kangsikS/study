#include "test.h"

void Myclass::setA(int a) {
	this->a = a;
}

int main() {
	Myclass *myclass = new Myclass(5);
	myclass->setA(10);

	cout << myclass->a << endl;

	string a;
	cin >> a;
	cout << "Hello!!! " << a << endl;

	return 0;
}