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
        cout<<"Addition: "<<a+b<<endl;
        cout<<"Multilication: "<<a*b<<endl;
        cout<<"Subtraction: "<<a-b<<endl;
        cout<<"Divison: "<<a/b<<endl;
    }
};
int main(){
    arithmetic<int> a(20,10);
    a.arithmeticOp();
    return 0;
    
}