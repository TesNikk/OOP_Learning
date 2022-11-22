#include<iostream>
using namespace std;
class Rectangle {
private:
	int length;
	int breadth;
public:
	Rectangle(int lenght, int breadth);
	int area();
};
Rectangle::Rectangle(int length, int breadth) {
	this->length = length;
	this->breadth = breadth;	
}
int Rectangle::area() {
	return length * breadth;
}
int main() {
	Rectangle r1(10,50);
	cout << r1.area() << endl;
	return 0;
}