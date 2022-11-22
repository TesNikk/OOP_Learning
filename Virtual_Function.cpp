//Calling overrided method
#include<iostream>
using namespace std;
class Base {
public:
	virtual void fun() {
		cout << "fun of base" << endl;
	}
};
class Derived:public Base {
public:
	void fun() {
		cout << "fun of derived" << endl;
	}
};
int main() {
	Base* ptr;
	Derived d;
	ptr = &d;
	ptr->fun();//virtual add=fun of derived AND not added virthual then fun of base
	return 0;
}
// #include<iostream>
// using namespace std;
// class BaseCar {
// public:
// 	virtual void start(){
// 		cout << "Base car";
// 	}
// };
// class AdvancedCar :public BaseCar {
// public:
// 	void start() {
// 		cout << "Advanced Car" << endl;
// 	}
// };
// int main() {
// 	BaseCar* p = new AdvancedCar();
// 	p->start();
// 	return 0;
// }