#include <iostream>
#include <string>
using namespace std;

class LibraryUser
{
protected:
  string name;
  int id;
  string contact;

public:
  LibraryUser(string n, int i, string c)
  {
    name = n;
    id = i;
    contact = c;
  }
  void displayUser()
  {
    cout << "Name: " << name << "\n";
    cout << "ID: " << id << "\n";
    cout << "Contact: " << contact << "\n";
  }
};

class Student : public LibraryUser
{
private:
  string grade;

public:
  Student(string n, int i, string c, string g)
      : LibraryUser(n, i, c)
  {
    grade = g;
  }

  void displayStudent()
  {
    displayUser();
    cout << "Grade: " << grade << "\n";
  }
};

class Teacher : public LibraryUser
{
private:
  string department;

public:
  Teacher(string n, int i, string c, string d)
      : LibraryUser(n, i, c)
  {
    department = d;
  }

  void displayTeacher()
  {
    displayUser();
    cout << "Department: " << department << "\n";
  }
};

int main()
{
  Student s("Ananya", 101, "9876543210", "2nd Year");
  Teacher t("Dr. Sharma", 201, "9123456780", "Computer Science");

  s.displayStudent();

  cout << "\n";
  t.displayTeacher();

  return 0;
}
