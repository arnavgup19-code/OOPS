#include <iostream>
using namespace std;

class Rectangle {
    float length, breadth;

public:
   
    Rectangle() {
        length = 0;
        breadth = 0;
    }

  
    Rectangle(float l, float b) {
        length = l;
        breadth = b;
    }

  
    Rectangle(float x) {
        length = x;
        breadth = x;
    }

    float area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;        
    Rectangle r2(5);    
    Rectangle r3(4, 6);  

    cout << "Area of r1: " << r1.area() << "\n";
    cout << "Area of r2: " << r2.area() << "\n";
    cout << "Area of r3: " << r3.area() << "\n";

    return 0;
}