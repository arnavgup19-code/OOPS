#include <iostream>
using namespace std;

class A{
public:
    int arr[5];

    int operator[](int i){
        if(i<0 || i>=5){
            cout<<"out";
            return -1;
        }
        return arr[i];
    }
};

int main(){
    A a;
    a.arr[0]=10;

    cout<<a[0]<<"\n";
    cout<<a[10];
}