#include <iostream>
using namespace std;

class A{
public:
    void operator()(int a,int b){
        cout<<a+b;
    }
};

int main(){
    A x;
    x(3,4);
}