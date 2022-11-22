
//TYPE-1

//#include<iostream>
//using namespace std;
//class Parent {
//private:
//	int a;
//protected:
//	int b;
//public:
//	int c;
//	void set_value() {
//		a = 5;
//		b = 10;
//		c = 15;
//	}
//};
//class Child :public Parent {
//public:
//	void set_value() {
//		//a = 5; cant access private value
//		b = 11;
//		c = 16;
//	}
//};
//class GrandChild :public Child {
//public:
//	void set_value() {
//		//a = 5;
//		b = 10;
//		c = 15;
//	}
//
//
//};
//int main() {
//	Child c;
//	//c.a = 10;
//	//c.b = 16;
//	c.c = 15;
//}

//TYPE-2

//#include<iostream>
//using namespace std;
//class Parent {
//private:
//	int a;
//protected:
//	int b;
//public:
//	int c;
//	void set_value() {
//		a = 5;
//		b = 10;
//		c = 15;
//	}
//};
//class Child :protected Parent {
// protected:
//public:
//	void set_value() {
//		//a = 5; cant access private value
//		b = 11;
//		c = 16;
//	}
//};
//class GrandChild :public Child {
//public:
//	void set_value() {
//		//a = 5;
//		b = 15;
//		c = 15;
//	}
//
//
//};
//int main() {
//	Child c;
//	//c.a = 10;
//	//c.b = 16;
//	//c.c = 15; cant access protected
//}

//TYPE-3

#include<iostream>
using namespace std;
class Parent {
private:
	int a;
protected:
	int b;
public:
	int c;
	void set_value() {
		a = 5;
		b = 10;
		c = 15;
	}
};
class Child :private Parent {
public:
	void set_value() {
		//a = 5; cant access private value
		b = 11;
		c = 16;
	}
};
class GrandChild :public Child {
public:
	void set_value() {
		//a = 5;
		//b = 10;cant access bcz private 
		//c = 15; cant access bcz private 
	}


};
int main() {
	Child c;
	//c.a = 10;
	//c.b = 16;
	//c.c = 15;
}
