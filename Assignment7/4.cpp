#include <iostream>
using namespace std;

class Student{
public:
    virtual void show()=0;
};

class Engineering: public Student{
public:
    void show(){ cout<<"eng"<<"\n"; }
};

class Medicine: public Student{
public:
    void show(){ cout<<"med"<<"\n"; }
};

class Science: public Student{
public:
    void show(){ cout<<"sci"<<"\n"; }
};

int main(){
    Student *s[3];

    Engineering e;
    Medicine m;
    Science sc;

    s[0]=&e; s[1]=&m; s[2]=&sc;

    for(int i=0;i<3;i++) s[i]->show();
}