// 1
#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
public:
    void setData(int r, string n) {
        this->roll = r;
        this->name = n;
    }
    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(101, "John");
    s1.display();
    
    Student *ptr = &s1;
    ptr->setData(102, "Alice");
    ptr->display();
    
    return 0;
}