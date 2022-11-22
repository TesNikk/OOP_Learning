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
	/*Complex add(Complex x) {
		Complex temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}*/
	Complex operator+(const Complex x) {
		Complex temp;
		temp.real = real + x.real;
		temp.img = img + x.img;
		return temp;
	}
	int display_real() {
		return real;
	}
	int display_img() {
		return img;
	}
};
int main() {
	Complex c1(10, 15);
	Complex c2(5, 15);
	Complex c3;
	//c3 = c1.add(c2);
	c3 = c1 + c2;
	cout << c3.display_real() << "+" << "i" << c3.display_img() << endl;
	return 0;
}