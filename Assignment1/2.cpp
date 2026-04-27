#include <iostream>
using namespace std;

int main() {
    int integer;
    float decimal;
    char character;
    
    cout << "Enter an integer: ";
    cin >> integer;
    
    cout << "Enter a decimal: ";
    cin >> decimal;
    
    cout << "Enter a character: ";
    cin >> character;
    
    cout << "\nInteger: " << integer << "\n";
    cout << "Decimal: " << decimal << "\n";
    cout << "Character: " << character << "\n";
    
    return 0;
}