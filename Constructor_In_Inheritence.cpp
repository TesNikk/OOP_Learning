#include<iostream>
using namespace std;
class Base {
public:
	Base() {
		cout << "Default cons-base is called" << endl;
	}
	Base(int x) {
		cout << "Parameter of base is called " <<x<< endl;
	}
};
class Derived :public Base {
public:
	Derived() {
		cout << "Default constructor is called" << endl;
	}
	Derived(int y) {
		cout << "Parameter constructor-derived " <<y<< endl;
	}
	Derived(int x, int y) :Base(x) {
		cout << "Parameter of derived " << y << endl;
	}
};
int main() {
	Derived d(10,50);
	return 0;
}