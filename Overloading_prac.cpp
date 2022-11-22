#include<iostream>
using namespace std;
class Rational {
private:
	int p;
	int q;
public:
	Rational(int p = 1, int q = 1) {
		this->p = p;
		this->q = q;
	}
	Rational operator+(Rational r) {
		Rational temp;
		temp.p = this->p * r.q + this->q*r.p;
		temp.q = this->q * r.q;
		return temp;
	}
	friend ostream& operator<<(ostream& out, Rational r);
};
 ostream& operator<<(ostream& os, Rational r) {
	 os << r.p << "/" << r.q;
	 return os;
}
int main() {
	Rational r1(3,4), r2(2, 5);
	Rational r3;
	r3 = r1 + r2;
	cout << r3 << endl;
	return 0;
}