#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:
    Rectangle(float l = 0, float b = 0) {
        length = l;
        breadth = b;
        cout << "Constructor called\n";
    }

    float area() {
        return length * breadth;
    }

    ~Rectangle() {
        cout << "Destructor called\n";
    }
};

int main() {
    Rectangle rect[3] = {
        Rectangle(),     
        Rectangle(5),   
        Rectangle(4, 6)   
    };

    for (int i = 0; i < 3; i++) {
        cout << "Area of rectangle " << i + 1
             << ": " << rect[i].area() << endl;
    }

    return 0;
}