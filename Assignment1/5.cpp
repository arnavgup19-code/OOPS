#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Hello\nWorld\n";
    cout << "Hello\tWorld\n";
    cout << "Hello\bWorld\n";
    cout << setw(10) << "Hello";
    return 0;
}