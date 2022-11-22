#include<iostream>
using namespace std;
class Complex {
private:
	int real;
	int img;
public:
	Complex(int r = 0, int i = 0) {
		real = r;
		img = i;
	}
	friend Complex operator+(Complex c1,Complex c2);
	int display_real() {
		return real;
	}
	int display_img() {
		return img;
	}
};
Complex operator+(Complex c1,Complex c2) {
	Complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;
}
int main() {
	Complex c1(10, 15);
	Complex c2(5, 15);
	Complex c3;
	c3 = c1 + c2;
	cout << c3.display_real() << "+"<< c3.display_img() <<"i"<<endl;
	return 0;
}