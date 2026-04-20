#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {}
    virtual void display() {}
};

class Circle : public Shape {
    int r;
public:
    void set(int x) { r = x; }

    void area() {
        cout << 3.14 * r * r << endl;
    }

    void display() {
        cout << "Circle" << endl;
    }
};

class Rectangle : public Shape {
    int l, b;
public:
    void set(int x, int y) { l = x; b = y; }

    void area() {
        cout << l * b << endl;
    }

    void display() {
        cout << "Rectangle" << endl;
    }
};

class Triangle : public Shape {
    int b, h;
public:
    void set(int x, int y) { b = x; h = y; }

    void area() {
        cout << (b * h) / 2 << endl;
    }

    void display() {
        cout << "Triangle" << endl;
    }
};

int main() {
    Circle c; c.set(5);
    Rectangle r; r.set(4, 6);
    Triangle t; t.set(6, 8);

    c.display(); c.area();
    r.display(); r.area();
    t.display(); t.area();
}