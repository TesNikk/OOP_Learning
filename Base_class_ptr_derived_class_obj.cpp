#include<iostream>
using namespace std;
class Base {
public:
	void func1() {
		cout << "function of base class" << endl;
	}
};
class Derived :public Base {
public:
	void func2() {
		cout << "function of derived class" << endl;
	}
};
int main() {
	Base* b;
	b = new Derived();
	b->func1();
	//b->func2();
	/*Derived D;
	Base* ptr = &D;*/// allowed
	return 0;
}