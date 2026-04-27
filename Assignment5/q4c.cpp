#include <iostream>
using namespace std;
class A {
public:
    void showA() {
        cout << "Class A\n";
    }
};

class B : public A {};
class C : public A {};
class D : public A {};

int main() {
    B b; C c; D d;

    b.showA();
    c.showA();
    d.showA();
}
