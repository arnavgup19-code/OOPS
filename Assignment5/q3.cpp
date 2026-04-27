#include <iostream>
using namespace std;

class Base {
public:
    int x = 10;
protected:
    int y = 20;
};

class PublicDerived : public Base {};
class ProtectedDerived : protected Base {};
class PrivateDerived : private Base {};

int main() {
    PublicDerived p;
    cout << p.x << "\n";  // ✅ allowed

    ProtectedDerived pr;

    PrivateDerived pv;

    return 0;
}