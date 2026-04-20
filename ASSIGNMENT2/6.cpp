#include <iostream>
#include <cstdlib>
using namespace std;


int globalValue = 100;
static int staticValue = 50;

class ScopeDemo {
private:
    int value;

public:
    static int staticMemberValue;   // moved to public

    ScopeDemo(int v) {
        value = v;
    }
    
    void displayValue();
    void displayGlobal();
    void displayStatic();
};

// Definition of static member
int ScopeDemo::staticMemberValue = 200;

void ScopeDemo::displayValue() {
    cout << "Member variable (value): " << value << "\n";
}

void ScopeDemo::displayGlobal() {
    int globalValue = 500;
    cout << "Local globalValue: " << globalValue << "\n";
    cout << "Global globalValue (using ::): " << ::globalValue << "\n";
}

void ScopeDemo::displayStatic() {
    cout << "Static globalValue (using ::): " << ::staticValue << "\n";
    cout << "Static member variable (using ::): " 
         << ScopeDemo::staticMemberValue << "\n";
}

void demonstrateGlobalAccess() {
    int globalValue = 300;
    cout << "Local globalValue in function: " << globalValue << "\n";
    cout <<" Global globalValue using :: : " << ::globalValue << "\n";
}

int main() {
      
    cout << "--- (a) Class function defined outside the class ---\n";
    ScopeDemo obj1(25);
    obj1.displayValue();
    
    cout << "\n--- (b) Access global variable vs local variable ---\n";
    ScopeDemo obj2(40);
    obj2.displayGlobal();
    
    cout << "\n--- Demonstrating global scope in function ---\n";
    demonstrateGlobalAccess();
    
    cout << "\n--- (c) Access static variable using :: ---\n";
    ScopeDemo obj3(60);
    obj3.displayStatic();
    
    cout << "\n--- (d) Using inbuilt libraries with scope resolution (std::) ---\n";
    std::cout << "Using std::cout (Standard Output Stream)\n";
    std::cout << "Global value: " << ::globalValue << "\n";
    std::cout << "Static value: " << ::staticValue << "\n";
    
    cout << "\n--- Direct access to static and global variables ---\n";
    cout << "globalValue (file scope): " << ::globalValue << "\n";
    cout << "staticValue (static): " << ::staticValue << "\n";
    cout << "ScopeDemo::staticMemberValue: " 
         << ScopeDemo::staticMemberValue << "\n";
    
    cout << "\n--- Modifying global and static variables ---\n";
    ::globalValue = 150;
    ::staticValue = 75;
    
    cout << "Modified globalValue: " << ::globalValue << "\n";
    cout << "Modified staticValue: " << ::staticValue << "\n";
    
    cout << "\n--- Summary of Scope Resolution Operator (::) ---\n";
    cout << "1. ClassName::functionName - Access class function defined outside class\n";
    cout << "2. ::variableName - Access global variable when local variable shadows it\n";
    cout << "3. ClassName::staticVariable - Access static member variable\n";
    cout << "4. std::cout, std::cin - Access from std namespace\n";
    
    return 0;
}
