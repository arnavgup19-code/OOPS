#include <iostream>
using namespace std;


class Complex {
private:
    float real;
    float imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }
    
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }
    
    void setComplex(float r, float i) {
        real = r;
        imaginary = i;
    }
    
    void displayComplex() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i\n";
        else
            cout << real << " - " << (-imaginary) << "i\n";
    }
    
    Complex addComplex(Complex c2) {
        Complex sum;
        sum.real = this->real + c2.real;
        sum.imaginary = this->imaginary + c2.imaginary;
        return sum;
    }
    
    Complex operator+(Complex c2) {
        Complex sum;
        sum.real = this->real + c2.real;
        sum.imaginary = this->imaginary + c2.imaginary;
        return sum;
    }
};

int main() {
    Complex *c1 = new Complex();
    Complex *c2 = new Complex();
    Complex *sum = new Complex();
    
    cout << "Enter first number:\n";
    float r1, i1;
    cout << "real: ";
    cin >> r1;
    cout << "imaginary: ";
    cin >> i1;
    c1->setComplex(r1, i1);
    
    cout << "Enter second number:\n";
    float r2, i2;
    cout << "real: ";
    cin >> r2;
    cout << "imaginary: ";
    cin >> i2;
    c2->setComplex(r2, i2);
    
    c1->displayComplex();
    c2->displayComplex();
    
    *sum = c1->addComplex(*c2);
    sum->displayComplex();
    
    delete c1;
    delete c2;
    delete sum;
    
    Complex c3(5, 3);
    Complex c4(2, 4);
    Complex c5 = c3 + c4;
    
    c3.displayComplex();
    c4.displayComplex();
    c5.displayComplex();
    
    return 0;
}
