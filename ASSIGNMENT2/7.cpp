#include <iostream>
#include <cstdlib>
using namespace std;



namespace CompanyA {
    int salary = 50000;
    float bonus = 5000;
    
    void displaySalary() {
        cout << "CompanyA - Salary: " << salary << "\n";
        cout << "CompanyA - Bonus: " << bonus << "\n";
    }
    
    void displayDetails() {
        cout << "Company A - Tech Solutions\n";
        cout << "Headquarters: New York\n";
    }
    
    class Employee {
    public:
        string name;
        
        Employee(string n = "Unknown") {
            name = n;
        }
        
        void show() {
            cout << "Employee Name: " << name << " (CompanyA)\n";
            displaySalary();
        }
    };
}

namespace CompanyB {
    int salary = 60000;
    float bonus = 7000;
    
    void displaySalary() {
        cout << "CompanyB - Salary: " << salary << "\n";
        cout << "CompanyB - Bonus: " << bonus << "\n";
    }
    
    void displayDetails() {
        cout << "Company B - Software Inc\n";
        cout << "Headquarters: California\n";
    }
    
    class Employee {
    public:
        string name;
        
        Employee(string n = "Unknown") {
            name = n;
        }
        
        void show() {
            cout << "Employee Name: " << name << " (CompanyB)\n";
            displaySalary();
        }
    };
}

namespace CompanyC {
    int salary = 55000;
    float bonus = 6000;
    
    void displaySalary() {
        cout << "CompanyC - Salary: " << salary << "\n";
        cout << "CompanyC - Bonus: " << bonus << "\n";
    }
    
    void displayDetails() {
        cout << "Company C - Digital Services\n";
        cout << "Headquarters: London\n";
    }
}

int main() {
        
    cout << "--- Using CompanyA Namespace ---\n";
    cout << "Method 1: Using scope resolution operator (::)\n";
    CompanyA::displayDetails();
    CompanyA::displaySalary();
    CompanyA::Employee emp1("John Smith");
    emp1.show();
    
    cout << "\n--- Using CompanyB Namespace ---\n";
    cout << "Method 1: Using scope resolution operator (::)\n";
    CompanyB::displayDetails();
    CompanyB::displaySalary();
    CompanyB::Employee emp2("Sarah Johnson");
    emp2.show();
    
    cout << "\n--- Using CompanyC Namespace ---\n";
    CompanyC::displayDetails();
    CompanyC::displaySalary();
    
    cout << "\n--- Accessing variables from different namespaces ---\n";
    cout << "CompanyA salary: " << CompanyA::salary << "\n";
    cout << "CompanyB salary: " << CompanyB::salary << "\n";
    cout << "CompanyC salary: " << CompanyC::salary << "\n";
    
    cout << "\n--- Using 'using' declaration ---\n";
    using CompanyA::displaySalary;
    cout << "Called CompanyA::displaySalary using 'using' declaration:\n";
    displaySalary();
    
    cout << "\n--- Using 'using namespace' ---\n";
    {
        using namespace CompanyB;
        cout << "Inside 'using namespace CompanyB' block:\n";
        cout << "Salary: " << salary << "\n";
        cout << "Bonus: " << bonus << "\n";
        displayDetails();
    }
    
    cout << "\n--- Creating objects from different namespaces ---\n";
    CompanyA::Employee empA("Alice");
    CompanyB::Employee empB("Bob");
    CompanyA::Employee empA2("Charlie");
    
    cout << "Employee from CompanyA:\n";
    empA.show();
    
    cout << "\nEmployee from CompanyB:\n";
    empB.show();
    
    cout << "\nAnother Employee from CompanyA:\n";
    empA2.show();
    
    cout << "\n--- Modifying namespace variables ---\n";
    CompanyA::salary = 55000;
    CompanyB::salary = 65000;
    
    cout << "Updated CompanyA salary: " << CompanyA::salary << "\n";
    cout << "Updated CompanyB salary: " << CompanyB::salary << "\n";
    
    cout << "\n--- Key Points about Namespaces ---\n";
    cout << "1. Namespaces prevent name conflicts\n";
    cout << "2. Same class name can exist in different namespaces\n";
    cout << "3. Same function name can exist in different namespaces\n";
    cout << "4. Access using ClassName::memberName\n";
    cout << "5. 'using' declaration brings names into current scope\n";
    cout << "6. 'using namespace' brings all names into current scope\n";
    
    return 0;
}
