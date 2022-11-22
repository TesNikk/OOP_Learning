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
    //constructor
    /*Rectangle() {
        length = 10;
        breadth = 50;
    }*/
    Rectangle(int l=0, int b=0) {
        set_length(l);
        set_breadth(b);
    }
    Rectangle(Rectangle& r) {
        length = r.length;
        breadth = r.breadth;
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
    Rectangle r;//i went to store and bought a random marker
    Rectangle r1(10);//bought a blue marker
    Rectangle r2(r1);//bought a marker like my friend's

    cout << r.area() << endl;
    cout << r1.area() << endl;
    cout << r2.area() << endl;
    return 0;
}