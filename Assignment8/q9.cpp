#include<iostream>
using namespace std;
template<class T>
class arithmetic{
    private:
    T a,b;
    public:
    arithmetic(T x,T y){
        a=x;
        b=y;
    }
    void arithmeticOp(){
        cout<<"Addition: "<<a+b<<"\n";
        cout<<"Multilication: "<<a*b<<"\n";
        cout<<"Subtraction: "<<a-b<<"\n";
        cout<<"Divison: "<<a/b<<"\n";
    }
};
int main(){
    arithmetic<int> a(20,10);
    a.arithmeticOp();
    return 0;
    
}