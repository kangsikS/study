#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;



class Myclass {
public:
	int a;
	Myclass(int a) {
		this->a = a;
		cout << a << endl;
	}

	void setA(int a);

};