#include <iostream>
using namespace std;

class Number {
    int value;
public:
    void set(int v) { value = v; }
    void show() { cout << "Value: " << value << endl; }

    int get() { return value; }
};

Number modify(Number n) { 
    n.set(n.get() + 10);
    return n;
}

int main() {
    Number n1, n2;

    n1.set(20);

    n2 = modify(n1);

    cout << "Original object:\n";
    n1.show();

    cout << "Modified object:\n";
    n2.show();

    return 0;
}