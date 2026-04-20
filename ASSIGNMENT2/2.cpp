#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


class StudentClass {
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
    
    void validateData() {
        if (rollNo <= 0) {
            cout << "Warning: Roll No must be positive!\n";
        }
        if (currentCGPA < 0 || currentCGPA > 4.0) {
            cout << "Warning: CGPA must be between 0 and 4.0!\n";
        }
    }

public:
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
        validateData();
    }
    
    void updateDetails() {
        cout << "\n=== Update Student Details ===\n";
        cout << "Name: ";
        cin >> name;
        cout << "Degree: ";
        cin >> degree;
        cout << "Hostel: ";
        cin >> hostel;
        validateData();
    }
    
    void updateCGPA() {
        cout << "Enter new CGPA: ";
        cin >> currentCGPA;
        validateData();
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
    cout << "========== QUESTION 2: CLASS WITH PRIVATE & PUBLIC ==========\n\n";
    
    cout << "DIFFERENCE BETWEEN PRIVATE AND PUBLIC:\n";
    cout << "========================================\n";
    cout << "PUBLIC: Members can be accessed from outside the class\n";
    cout << "PRIVATE: Members can only be accessed within the class\n\n";
    
    StudentClass *sc = (StudentClass *)malloc(sizeof(StudentClass));
    
    new (sc) StudentClass();
    
    sc->addDetails();
    sc->displayDetails();
    
    cout << "\n--- Updating Details ---\n";
    sc->updateDetails();
    sc->displayDetails();
    
    cout << "\n--- Updating CGPA ---\n";
    sc->updateCGPA();
    sc->displayDetails();
    
    cout << "\n--- Updating Hostel ---\n";
    sc->updateHostel();
    sc->displayDetails();
    
    free(sc);
    return 0;
}
