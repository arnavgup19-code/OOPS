#include <iostream>
using namespace std;

class Complex{
public:
    int r,i;

    Complex(int r,int i){
        this->r=r;
        this->i=i;
    }

    Complex(const Complex &c){
        r=c.r;
        i=c.i;
    }

    void display(){
        cout<<r<<" + "<<i<<"i"<<endl;
    }

    friend Complex sum(Complex,Complex);
};

Complex sum(Complex a,Complex b){
    return Complex(a.r+b.r , a.i+b.i);
}

int main(){
    Complex c1(2,3), c2(4,5);

    Complex c3 = sum(c1,c2);

    c3.display();
}