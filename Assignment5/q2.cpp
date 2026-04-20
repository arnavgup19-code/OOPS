#include <iostream>
using namespace std;

class Person
{
protected:
  int age;

public:
  void setAge(int a)
  {
    age = a;
  }
};

class Student : public Person
{
public:
  void displayAge()
  {
    cout << "Age is: " << age << endl;
  }
};

int main()
{
  Student s;
  s.setAge(20);
  s.displayAge();
  return 0;
}