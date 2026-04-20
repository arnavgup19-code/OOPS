#include <iostream>
using namespace std;

class A{
public:
    int x;

    friend istream& operator>>(istream &in,A &a){
        in>>a.x;
        return in;
    }

    friend ostream& operator<<(ostream &out,A &a){
        out<<a.x;
        return out;
    }
};

int main(){
    A a;
    cin>>a;
    cout<<a;
}