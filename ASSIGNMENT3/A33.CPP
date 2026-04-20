// 3
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int numA;
public:
    ClassA(int n) : numA(n) {}
    friend int addObjects(ClassA a, ClassB b);
};

class ClassB {
    int numB;
public:
    ClassB(int n) : numB(n) {}
    friend int addObjects(ClassA a, ClassB b);
};

int addObjects(ClassA a, ClassB b) {
    return a.numA + b.numB;
}

int main() {
    ClassA objA(15);
    ClassB objB(25);
    
    int sum = addObjects(objA, objB);
    cout << "Sum: " << sum << endl;
    
    return 0;
}