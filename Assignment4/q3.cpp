#include <iostream>
using namespace std;

class Demo {
public:
    Demo() {
        cout << "constructor\n";
    }

    ~Demo() {
        cout << "destructor\n";
    }
};

int main() {
    Demo d1;
    Demo d2;

    cout << "main\n";

    return 0;
}
