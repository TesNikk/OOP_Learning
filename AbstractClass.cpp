#include<iostream>
using namespace std;
class Base {//Abstract class also called interferance
public:
	virtual void fun1() = 0;
	virtual void fun2() = 0;
};
class Derived :public Base {
public:
	void fun1() {
		cout << "Innova started"<<endl;
	}
	void fun2() {
		cout << "Innova stopped" << endl;
	}
};
int main() {
	Base *d;
	d = new Derived();
	d->fun1();
	d->fun2();
	return 0;
}