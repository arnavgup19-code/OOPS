#include <iostream>
using namespace std;

class Animal
{
public:
  void eat()
  {
    cout << "Animal is eating" << endl;
  }
};

class Dog : public Animal
{
public:
  void bark()
  {
    cout << "Dog is barking" << endl;
  }
};

int main()
{
  Animal a;
  a.eat();

  Dog d;
  d.eat();  // inherited function
  d.bark(); // own function

  return 0;
}