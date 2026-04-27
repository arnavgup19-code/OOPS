#include <iostream>
#include <string>
using namespace std;
namespace CompanyA {
    int salary = 50000;
    float bonus = 5000;
    
    void displaySalary() {
        cout << "Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
    }
    
    void displayDetails() {
        cout << "Company A\n";
    }
    
    class Employee {
    public:
        string name;
        
        Employee(string n = "Unknown") {
            name = n;
        }
        
        void show() {
            cout << name << " - CompanyA\n";
            displaySalary();
        }
    };
}

namespace CompanyB {
    int salary = 60000;
    float bonus = 7000;
    
    void displaySalary() {
        cout << "Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
    }
    
    void displayDetails() {
        cout << "Company B\n";
    }
    
    class Employee {
    public:
        string name;
        
        Employee(string n = "Unknown") {
            name = n;
        }
        
        void show() {
            cout << name << " - CompanyB\n";
            displaySalary();
        }
    };
}

namespace CompanyC {
    int salary = 55000;
    float bonus = 6000;
    
    void displaySalary() {
        cout << "Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
    }
    
    void displayDetails() {
        cout << "Company C\n";
    }
}

int main() {
    CompanyA::displayDetails();
    CompanyA::displaySalary();
    CompanyA::Employee emp1("Amit");
    emp1.show();
    
    cout << "\n";
    CompanyB::displayDetails();
    CompanyB::displaySalary();
    CompanyB::Employee emp2("Riya");
    emp2.show();
    
    cout << "\n";
    CompanyC::displayDetails();
    CompanyC::displaySalary();
    
    cout << "\n";
    cout << CompanyA::salary << "\n";
    cout << CompanyB::salary << "\n";
    cout << CompanyC::salary << "\n";
    
    using CompanyA::displaySalary;
    cout << "\n";
    displaySalary();
    
    {
        using namespace CompanyB;
        cout << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
        displayDetails();
    }
    
    CompanyA::Employee empA("Alice");
    CompanyB::Employee empB("Bob");
    
    cout << "\n";
    empA.show();
    empB.show();

    CompanyA::salary = 55000;
    CompanyB::salary = 65000;
    
    cout << "\n";
    cout << CompanyA::salary << "\n";
    cout << CompanyB::salary << "\n";

    return 0;
}
