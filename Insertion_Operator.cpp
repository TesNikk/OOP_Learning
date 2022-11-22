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
	friend ostream& operator<<(ostream& out, Complex c1);
};
ostream& operator<<(ostream& out, Complex c1) {
	out << c1.real << "+i" << c1.img << endl;
	return out;
}
int main() {
	Complex c1(5, 10);
	Complex c2(10, 5);
	cout << c1 << c2<<endl;
	//operator<<(cout, c1);
	return 0;
}