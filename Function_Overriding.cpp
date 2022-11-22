#include<iostream>
using namespace std;
class Base {
public:
	void display() {
		cout << "Display of base class" << endl;
	}
};
class Derived :public Base {
public:
	void display() {
		cout << "Display of derived class" << endl;//redefining the display function
	}
};
int main() {
	Derived d;
	d.display();
	return 0;
}


