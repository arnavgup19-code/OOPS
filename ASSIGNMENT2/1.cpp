#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


struct Student {
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
    
    void addDetails() {
        cout << "\n=== Add Student Details ===\n";
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
        cout << "\n=== Update Student Details ===\n";
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
        cout << "\n--- Student Details ---\n";
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "Degree: " << degree << "\n";
        cout << "Hostel: " << hostel << "\n";
        cout << "CGPA: " << currentCGPA << "\n";
    }
};

int main() {
    
    Student *s = (Student *)malloc(sizeof(Student));
    
    s->addDetails();
    s->displayDetails();
    
    cout << "\n--- Updating Details ---\n";
    s->updateDetails();
    s->displayDetails();
    
    cout << "\n--- Updating CGPA ---\n";
    s->updateCGPA();
    s->displayDetails();
    
    cout << "\n--- Updating Hostel ---\n";
    s->updateHostel();
    s->displayDetails();
    
    free(s);
    return 0;
}
