#include<iostream>
#include<math.h>
#define pi 3.14;
using namespace std;
class Shape {
public:
	virtual float area() = 0;
	virtual float perimeter() = 0;
};
class Rectangle :public Shape {
private:
	float length;
	 float width;
public:
	Rectangle(float l=1,float w=1) {
		length = l;
		width = w;
	}
	float area() {
		return length*width;
	}
	float perimeter() {
		return 2 * (length + width);
	}
};
class Circle :public Shape {
private:
	float radius;
public:
	Circle(float r = 1) {
		radius = r;
	}
	float area() {
		return radius * radius * pi;
	}
	float perimeter() {
		return 2 * radius *pi;
	}
};
int main() {
	Shape* s;
	s=new Rectangle(10.5);
	cout << s->area() << " " << s->perimeter() << endl;
	s = new Circle(10);
	cout << s->area() << " " << s->perimeter() << endl;
	return 0;
}