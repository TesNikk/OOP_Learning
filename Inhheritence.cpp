#include<iostream>
using namespace std;

class Rectangle {
private:
	int length;
	int width;
public:
	Rectangle();
	Rectangle(int l, int w);
	Rectangle(const Rectangle& s);
	void set_length(int l);
	void set_width(int w);
	int get_length();
	int get_width();
	int area();
	int perimeter();
	bool issquare();
	~Rectangle();
};

class Cuboid :public Rectangle {
private:
	int height;
public:
	Cuboid(int h=1);
	void set_height(int h);
	int get_height();
	int volume() {
		return get_length() * get_width() * height;
	};
};
//Rectangle Methods
Rectangle::Rectangle() {
	length = 1;
	width = 1;
}
Rectangle::Rectangle(int l, int w) {
	length = l;
	width = w;
}
Rectangle::Rectangle(const Rectangle &s) {
	length = s.length;
	width = s.width;
}
void Rectangle::set_length(int l) {
	length = l;
}
void Rectangle::set_width(int w) {
	width = w;
}
int Rectangle::get_length() {
	return length;
}
int Rectangle::get_width() {
	return width;
}
int Rectangle::area() {
	return length * width;
}
int Rectangle::perimeter() {
	return 2 * (length + width);
}
bool Rectangle::issquare() {
	return length == width;
}
Rectangle::~Rectangle() {
	cout << "DESTRUCTOR is called" << endl;
}
//Cuboid Methods
Cuboid::Cuboid(int h) {
	height = h;
}
void Cuboid::set_height(int h) {
	height = h;
}
int Cuboid::get_height() {
	return height;
}
//Main function
int main() {
	Cuboid c(5);
	c.set_length(10);
	c.set_width(7);
	cout << c.volume() << endl;
	return 0;
}