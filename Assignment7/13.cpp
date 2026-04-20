#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar{
public:
    float r,theta;

    Polar(float r,float theta){
        this->r=r;
        this->theta=theta;
    }

    operator Cartesian();
};

class Cartesian{
public:
    float x,y;

    void show(){
        cout<<x<<" "<<y;
    }
};

Polar::operator Cartesian(){
    Cartesian c;
    c.x = r*cos(theta);
    c.y = r*sin(theta);
    return c;
}

int main(){
    Polar p(10,5);
    Cartesian c = p;
    c.show();
}