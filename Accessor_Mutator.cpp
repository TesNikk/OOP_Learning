#include<iostream>
using namespace std;
class Rectangle {
private:
    int length;
    int breadth;
public:
    void set_length(int l) {//Accessor
        if (l > 0) {
            length = l;
        }
        else {
            length = 1;
        }
    }
    void set_breadth(int b) {//Accessor
        if (b > 0) {
            breadth = b;
        }
        else {
            breadth = 1;
        }
    }
    int get_length() {//Mutator
        return length;
    }
    int get_breadth() {//Mutator
        return breadth;
    }
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
};
int main() {
    Rectangle r1;
    // r1.set_length(10);
    // r1.set_breadth(5);
    // cout << r1.get_length() << " " << r1.get_breadth() << endl;
    cout << r1.area() << " " << r1.perimeter() << endl;
    return 0;
}