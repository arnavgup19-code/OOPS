#include <iostream>
using namespace std;
#include <cmath>;


class Triangle {
public:
    void isoceles_area(int breadth,int height){
        cout << (breadth * height) / 2 << "\n";
    }

    void equilateral_area(float a){
        cout<<(1.732/4)*a*a<<"\n";
    }
    

    void generic_area(int a, int b, int c) {
        float s = (a + b + c) / 2.0;
        cout << sqrt(s * (s-a) * (s-b) * (s-c)) << "\n";
    }
};

int main() {
    Triangle t;
    t.isoceles_area(10, 5);      
    t.equilateral_area(6.0f);       
    t.generic_area(3, 4, 5);    
}