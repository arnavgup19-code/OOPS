#include <iostream>
using namespace std;

class B; 
class A {
    int x;
public:
    void set(int val) { x = val; }
    void show() { cout << "A: " << x << "\n"; }
    friend void swap(A &, B &);
};

class B {
    int y;
public:
    void set(int val) { y = val; }
    void show() { cout << "B: " << y << "\n"; }
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

    a.show();
    b.show();

    swap(a, b);

    a.show();
    b.show();

    return 0;
}
