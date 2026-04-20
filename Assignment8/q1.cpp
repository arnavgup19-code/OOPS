#include<iostream>
using namespace std;

template <class T>
void ValueSwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10, y = 20;
    ValueSwap(x, y);
    cout << "After swap (int): " << x << " " << y << endl;

    float p = 1.5;
    float  q = 2.5;
    ValueSwap(p, q);
    cout << "After swap (float): " << p << " " << q << endl;

    return 0;
}