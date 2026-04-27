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

class D : public B, public C {
public:
    void showD() {
        cout << "Class D\n";
    }
};

int main() {
    D obj;
    obj.B::showA(); 
    obj.C::showA();
    obj.showD();
}
