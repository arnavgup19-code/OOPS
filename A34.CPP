// 4
#include <iostream>
using namespace std;

class ClassA {
    int privateData;
public:
    ClassA(int d) : privateData(d) {}
    friend class ClassB;
};

class ClassB {
public:
    void display(ClassA obj) {
        cout << "Private data of ClassA: " << obj.privateData << endl;
    }
    void modify(ClassA &obj, int newValue) {
        obj.privateData = newValue;
    }
};

int main() {
    ClassA objA(100);
    ClassB objB;
    
    objB.display(objA);
    objB.modify(objA, 200);
    objB.display(objA);
    
    return 0;
}