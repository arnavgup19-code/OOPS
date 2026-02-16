// 2
#include <iostream>
using namespace std;

class ClassB;

class ClassA {
    int valueA;
public:
    ClassA(int v) : valueA(v) {}
    void display() { cout << "ClassA value: " << valueA << endl; }
    friend void swapValues(ClassA &a, ClassB &b);
};

class ClassB {
    int valueB;
public:
    ClassB(int v) : valueB(v) {}
    void display() { cout << "ClassB value: " << valueB << endl; }
    friend void swapValues(ClassA &a, ClassB &b);
};

void swapValues(ClassA &a, ClassB &b) {
    int temp = a.valueA;
    a.valueA = b.valueB;
    b.valueB = temp;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);
    
    cout << "Before swap:" << endl;
    objA.display();
    objB.display();
    
    swapValues(objA, objB);
    
    cout << "After swap:" << endl;
    objA.display();
    objB.display();
    
    return 0;
}