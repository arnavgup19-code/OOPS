#include <iostream>
using namespace std;

class Test{
public:
    float x;

    Test(float f){
        x=f;
    }

    void show(){
        cout<<x;
    }
};

int main(){
    Test t = 5.5;
    t.show();
}