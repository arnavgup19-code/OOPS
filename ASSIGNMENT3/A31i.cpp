#include <iostream>
using namespace std;

class Student {
    int roll;
public:
    void setData(int roll) {
        this->roll = roll;   
    }

    void display() {
        cout << "Roll number: " << roll << "\n";
    }
};

int main() {
    Student s1;
  
    s1.setData(10);
    s1.display();
  
    Student *ptr = &s1;

    ptr->setData(20);
    ptr->display();

    return 0;
}