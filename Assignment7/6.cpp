#include <iostream>
using namespace std;

class STRING{
public:
    string s;

    STRING(string s=""){ this->s=s; }

    bool operator==(STRING t){
        return s==t.s;
    }

    STRING operator+(STRING t){
        return STRING(s + t.s);
    }
};

int main(){
    STRING a("hi"), b("hi"), c;

    cout<<(a==b)<<endl;
    c = a + b;
    cout<<c.s;
}