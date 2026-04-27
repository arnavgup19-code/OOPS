#include <iostream>
#include <string>
using namespace std;


struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
    
    void addDetails() {
        cout << "Name: ";
        cin >> name;
        cout << "Roll No: ";
        cin >> rollNo;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
        cout << "Current CGPA: ";
        cin >> currentCGPA;
    }
    
    void updateDetails() {
        cout << "Name: ";
        cin >> name;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
    }
    
    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
    }
    
    void updateHostel() {
        cout << "Enter new Hostel: ";
        cin >> hostel;
    }
    
    void displayDetails() {
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "Degree: " << degree << "\n";
        cout << "Hostel: " << hostel << "\n";
        cout << "CGPA: " << currentCGPA << "\n";
    }
};

int main() {
    
    Student *s = new Student;
    
    s->addDetails();
    s->displayDetails();
    
    cout << "\n";
    s->updateDetails();
    s->displayDetails();
    
    cout << "\n";
    s->updateCGPA();
    s->displayDetails();
    
    cout << "\n";
    s->updateHostel();
    s->displayDetails();
    
    delete s;
    return 0;
}
