#include <iostream>
#include <cstdlib>
using namespace std;


int globalValue = 100;
static int staticValue = 50;

class ScopeDemo {
private:
    int value;

public:
    static int staticMemberValue;

    ScopeDemo(int v) {
        value = v;
    }
    
    void displayValue();
    void displayGlobal();
    void displayStatic();
};
int ScopeDemo::staticMemberValue = 200;

void ScopeDemo::displayValue() {
    cout << value << "\n";
}

void ScopeDemo::displayGlobal() {
    int globalValue = 500;
    cout << globalValue << "\n";
    cout << ::globalValue << "\n";
}

void ScopeDemo::displayStatic() {
    cout << ::staticValue << "\n";
    cout << ScopeDemo::staticMemberValue << "\n";
}

void demonstrateGlobalAccess() {
    int globalValue = 300;
    cout << globalValue << "\n";
    cout << ::globalValue << "\n";
}

int main() {
    ScopeDemo obj1(25);
    obj1.displayValue();
    
    cout << "\n";
    ScopeDemo obj2(40);
    obj2.displayGlobal();
    
    cout << "\n";
    demonstrateGlobalAccess();
    
    cout << "\n";
    ScopeDemo obj3(60);
    obj3.displayStatic();
    
    cout << "\n";
    std::cout << ::globalValue << "\n";
    std::cout << ::staticValue << "\n";

    ::globalValue = 150;
    ::staticValue = 75;
    
    cout << ::globalValue << "\n";
    cout << ::staticValue << "\n";
    
    return 0;
}
