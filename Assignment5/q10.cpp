#include <iostream>
using namespace std;

class Person
{
protected:
  string name;
  string address;

public:
  Person(string n, string a)
  {
    name = n;
    address = a;
  }

  void displayPerson()
  {
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
  }
};

class Staff : virtual public Person
{
protected:
  int employee_id;
  string department;

public:
  Staff(string n, string a, int id, string dept)
      : Person(n, a)
  {
    employee_id = id;
    department = dept;
  }

  void displayStaff()
  {
    cout << "Employee ID: " << employee_id << endl;
    cout << "Department: " << department << endl;
  }
};

class Student : virtual public Person
{
protected:
  int student_id;
  string grade;

public:
  Student(string n, string a, int id, string g)
      : Person(n, a)
  {
    student_id = id;
    grade = g;
  }

  void displayStudent()
  {
    cout << "Student ID: " << student_id << endl;
    cout << "Grade: " << grade << endl;
  }
};

class TeachingAssistant : public Staff, public Student
{
public:
  TeachingAssistant(string n, string a, int empId, string dept, int stuId, string g)
      : Person(n, a), Staff(n, a, empId, dept), Student(n, a, stuId, g) {}

  void displayTA()
  {
    displayPerson();
    displayStaff();
    displayStudent();
  }
};

int main()
{
  TeachingAssistant ta("Ananya", "Delhi", 101, "CSE", 202, "A");

  ta.displayTA();

  return 0;
}