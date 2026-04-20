#include <iostream>
using namespace std;

class Time{
public:
    int h,m,s;

    Time(int h=0,int m=0,int s=0){
        this->h=h; this->m=m; this->s=s;
    }

    Time operator+(Time t){
        Time temp;
        temp.s = s + t.s;
        temp.m = m + t.m + temp.s/60;
        temp.s %= 60;
        temp.h = h + t.h + temp.m/60;
        temp.m %= 60;
        return temp;
    }

    void show(){
        cout<<h<<" "<<m<<" "<<s;
    }
};

int main(){
    Time t1(5,15,34),t2(9,53,58),t3;
    t3 = t1 + t2;
    t3.show();
}