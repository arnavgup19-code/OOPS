#include <iostream>
#include <cstdlib>
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

    
    cout << "--- Method 1: Using setComplex() ---\n";
    Complex *c1 = (Complex *)malloc(sizeof(Complex));
    Complex *c2 = (Complex *)malloc(sizeof(Complex));
    Complex *sum = (Complex *)malloc(sizeof(Complex));
    
    new (c1) Complex();
    new (c2) Complex();
    new (sum) Complex();
    
    cout << "Enter first complex number:\n";
    float r1, i1;
    cout << "Real part: ";
    cin >> r1;
    cout << "Imaginary part: ";
    cin >> i1;
    c1->setComplex(r1, i1);
    
    cout << "\nEnter second complex number:\n";
    float r2, i2;
    cout << "Real part: ";
    cin >> r2;
    cout << "Imaginary part: ";
    cin >> i2;
    c2->setComplex(r2, i2);
    
    cout << "\n--- Display Complex Numbers ---\n";
    cout << "First Complex Number: ";
    c1->displayComplex();
    cout << "Second Complex Number: ";
    c2->displayComplex();
    
    cout << "\n--- Sum of Complex Numbers ---\n";
    *sum = c1->addComplex(*c2);
    cout << "Sum: ";
    sum->displayComplex();
    
    free(c1);
    free(c2);
    free(sum);
    
    cout << "\n\n--- Method 2: Using Constructor ---\n";
    Complex c3(5, 3);
    Complex c4(2, 4);
    Complex c5 = c3 + c4;
    
    cout << "Complex 1: ";
    c3.displayComplex();
    cout << "Complex 2: ";
    c4.displayComplex();
    cout << "Sum: ";
    c5.displayComplex();
    
    return 0;
}
