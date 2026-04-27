#include <iostream>
#include <string>
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
            cout << "Invalid roll no\n";
        }
        if (currentCGPA < 0 || currentCGPA > 4.0) {
            cout << "Invalid CGPA\n";
        }
    }

public:
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
        validateData();
    }
    
    void updateDetails() {
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
        cout << "Name: " << name << "\n";
        cout << "Roll No: " << rollNo << "\n";
        cout << "Degree: " << degree << "\n";
        cout << "Hostel: " << hostel << "\n";
        cout << "CGPA: " << currentCGPA << "\n";
    }
};

int main() {
    StudentClass *sc = new StudentClass;
    
    sc->addDetails();
    sc->displayDetails();
    
    cout << "\n";
    sc->updateDetails();
    sc->displayDetails();
    
    cout << "\n";
    sc->updateCGPA();
    sc->displayDetails();
    
    cout << "\n";
    sc->updateHostel();
    sc->displayDetails();
    
    delete sc;
    return 0;
}
