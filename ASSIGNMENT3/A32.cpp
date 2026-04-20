#include <iostream>
using namespace std;

class B; 

class A {
    int x;
public:
    void set(int val) { x = val; }
    void show() { cout << "A: " << x << endl; }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    void set(int val) { y = val; }
    void show() { cout << "B: " << y << endl; }
    friend void swap(A &, B &);
};

void swap(A &a, B &b) {
    int temp = a.x;
    a.x = b.y;
    b.y = temp;
}

int main() {
    A a;
    B b;

    a.set(5);
    b.set(10);

    cout << "Before swap:" << endl;
    a.show();
    b.show();

    swap(a, b);

    cout << "After swap:" << endl;
    a.show();
    b.show();

    return 0;
}