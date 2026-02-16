q1) #include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// =============== QUESTION 1: STRUCTURE ===============
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
    cout << "========== QUESTION 1: STRUCTURE ==========\n";
    
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


q2)
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

// =============== QUESTION 2: CLASS WITH PRIVATE & PUBLIC ===============
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


q3)
#include <iostream>
#include <cstdlib>
using namespace std;

// =============== QUESTION 3: PRIVATE FUNCTION CALLED FROM PUBLIC ===============
class BankAccount {
private:
    float balance;
    int accountNumber;
    
    void verifyBalance() {
        if (balance < 0) {
            cout << "ALERT: Negative balance detected!\n";
        }
    }
    
    void applyInterest() {
        float interest = balance * 0.05;
        balance = balance + interest;
        cout << "Interest applied. New balance: " << balance << "\n";
    }
    
    void logTransaction(string type, float amount) {
        cout << "[LOG] Transaction Type: " << type << ", Amount: " << amount << "\n";
    }

public:
    BankAccount() {
        balance = 0;
        accountNumber = 0;
    }
    
    void createAccount(int accNo, float initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
        cout << "Account created successfully!\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Initial Balance: " << balance << "\n";
    }
    
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << "\n";
            logTransaction("DEPOSIT", amount);
            verifyBalance();
        } else {
            cout << "Invalid deposit amount!\n";
        }
    }
    
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";
            logTransaction("WITHDRAWAL", amount);
            verifyBalance();
        } else {
            cout << "Invalid withdrawal amount or insufficient balance!\n";
        }
    }
    
    void applyYearlyInterest() {
        cout << "Applying yearly interest...\n";
        applyInterest();
    }
    
    void displayBalance() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Current Balance: " << balance << "\n";
    }
};

int main() {
    cout << "========== QUESTION 3: PRIVATE FUNCTION CALLED FROM PUBLIC ==========\n\n";
    
    BankAccount *acc = (BankAccount *)malloc(sizeof(BankAccount));
    
    new (acc) BankAccount();
    
    acc->createAccount(12345, 5000);
    cout << "\n";
    
    cout << "--- Deposit 1000 ---\n";
    acc->deposit(1000);
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Deposit 500 ---\n";
    acc->deposit(500);
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Withdraw 200 ---\n";
    acc->withdraw(200);
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Apply Yearly Interest ---\n";
    acc->applyYearlyInterest();
    acc->displayBalance();
    cout << "\n";
    
    cout << "--- Withdraw 1000 ---\n";
    acc->withdraw(1000);
    acc->displayBalance();
    
    free(acc);
    return 0;
}

q4)
#include <iostream>
#include <cstdlib>
using namespace std;

// =============== QUESTION 4: RECTANGLE CLASS ===============
class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle() {
        width = 0;
        height = 0;
    }
    
    void getdata() {
        cout << "\n=== Enter Rectangle Data ===\n";
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;
    }
    
    void calculatearea() {
        int area = width * height;
        cout << "\n--- Rectangle Area Calculation ---\n";
        cout << "Width: " << width << "\n";
        cout << "Height: " << height << "\n";
        cout << "Area of Rectangle: " << area << " square units\n";
    }
    
    void displayDimensions() {
        cout << "\n--- Rectangle Dimensions ---\n";
        cout << "Width: " << width << "\n";
        cout << "Height: " << height << "\n";
    }
};

int main() {
    cout << "========== QUESTION 4: RECTANGLE CLASS ==========\n";
    
    Rectangle *rect = (Rectangle *)malloc(sizeof(Rectangle));
    
    new (rect) Rectangle();
    
    rect->getdata();
    rect->displayDimensions();
    rect->calculatearea();
    
    cout << "\n\n--- Second Rectangle ---\n";
    rect->getdata();
    rect->displayDimensions();
    rect->calculatearea();
    
    free(rect);
    return 0;
}

q5)
#include <iostream>
#include <cstdlib>
using namespace std;

// =============== QUESTION 5: COMPLEX NUMBER CLASS ===============
class Complex {
private:
    float real;
    float imaginary;

public:
    Complex() {
        real = 0;
        imaginary = 0;
    }
    
    Complex(float r, float i) {
        real = r;
        imaginary = i;
    }
    
    void setComplex(float r, float i) {
        real = r;
        imaginary = i;
    }
    
    void displayComplex() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i\n";
        else
            cout << real << " - " << (-imaginary) << "i\n";
    }
    
    Complex addComplex(Complex c2) {
        Complex sum;
        sum.real = this->real + c2.real;
        sum.imaginary = this->imaginary + c2.imaginary;
        return sum;
    }
    
    Complex operator+(Complex c2) {
        Complex sum;
        sum.real = this->real + c2.real;
        sum.imaginary = this->imaginary + c2.imaginary;
        return sum;
    }
};

int main() {
    cout << "========== QUESTION 5: COMPLEX NUMBER CLASS ==========\n\n";
    
    cout << "--- Method 1: Using setComplex() ---\n";
    Complex *c1 = (Complex *)malloc(sizeof(Complex));
    Complex *c2 = (Complex *)malloc(sizeof(Complex));
    Complex *sum = (Complex *)malloc(sizeof(Complex));
    
    new (c1) Complex();
    new (c2) Complex();
    new (sum) Complex();
    
    cout << "Enter first complex number:\n";
    float r1, i1;
    cout << "Real part: ";
    cin >> r1;
    cout << "Imaginary part: ";
    cin >> i1;
    c1->setComplex(r1, i1);
    
    cout << "\nEnter second complex number:\n";
    float r2, i2;
    cout << "Real part: ";
    cin >> r2;
    cout << "Imaginary part: ";
    cin >> i2;
    c2->setComplex(r2, i2);
    
    cout << "\n--- Display Complex Numbers ---\n";
    cout << "First Complex Number: ";
    c1->displayComplex();
    cout << "Second Complex Number: ";
    c2->displayComplex();
    
    cout << "\n--- Sum of Complex Numbers ---\n";
    *sum = c1->addComplex(*c2);
    cout << "Sum: ";
    sum->displayComplex();
    
    free(c1);
    free(c2);
    free(sum);
    
    cout << "\n\n--- Method 2: Using Constructor ---\n";
    Complex c3(5, 3);
    Complex c4(2, 4);
    Complex c5 = c3 + c4;
    
    cout << "Complex 1: ";
    c3.displayComplex();
    cout << "Complex 2: ";
    c4.displayComplex();
    cout << "Sum: ";
    c5.displayComplex();
    
    return 0;
}

q6)
#include <iostream>
#include <cstdlib>
using namespace std;

// =============== QUESTION 6: SCOPE RESOLUTION OPERATOR ===============

int globalValue = 100;

static int staticValue = 50;

class ScopeDemo {
private:
    int value;
    static int staticMemberValue;

public:
    ScopeDemo(int v) {
        value = v;
    }
    
    void displayValue();
    
    void displayGlobal();
    
    void displayStatic();
};

int ScopeDemo::staticMemberValue = 200;

void ScopeDemo::displayValue() {
    cout << "Member variable (value): " << value << "\n";
}

void ScopeDemo::displayGlobal() {
    int globalValue = 500;
    cout << "Local globalValue: " << globalValue << "\n";
    cout << "Global globalValue (using ::): " << ::globalValue << "\n";
}

void ScopeDemo::displayStatic() {
    cout << "Static globalValue (using ::): " << ::staticValue << "\n";
    cout << "Static member variable (using ::): " << ScopeDemo::staticMemberValue << "\n";
}

void demonstrateGlobalAccess() {
    int globalValue = 300;
    cout << "Local globalValue in function: " << globalValue << "\n";
    cout << "Global globalValue using :: : " << ::globalValue << "\n";
}

int main() {
    cout << "========== QUESTION 6: SCOPE RESOLUTION OPERATOR (::) ==========\n\n";
    
    cout << "--- (a) Class function defined outside the class ---\n";
    ScopeDemo obj1(25);
    obj1.displayValue();
    
    cout << "\n--- (b) Access global variable vs local variable ---\n";
    ScopeDemo obj2(40);
    obj2.displayGlobal();
    
    cout << "\n--- Demonstrating global scope in function ---\n";
    demonstrateGlobalAccess();
    
    cout << "\n--- (c) Access static variable using :: ---\n";
    ScopeDemo obj3(60);
    obj3.displayStatic();
    
    cout << "\n--- (d) Using inbuilt libraries with scope resolution (std::) ---\n";
    std::cout << "Using std::cout (Standard Output Stream)\n";
    std::cout << "Global value: " << ::globalValue << "\n";
    std::cout << "Static value: " << ::staticValue << "\n";
    
    cout << "\n--- Direct access to static and global variables ---\n";
    cout << "globalValue (file scope): " << ::globalValue << "\n";
    cout << "staticValue (static): " << ::staticValue << "\n";
    cout << "ScopeDemo::staticMemberValue: " << ScopeDemo::staticMemberValue << "\n";
    
    cout << "\n--- Modifying global and static variables ---\n";
    ::globalValue = 150;
    ::staticValue = 75;
    
    cout << "Modified globalValue: " << ::globalValue << "\n";
    cout << "Modified staticValue: " << ::staticValue << "\n";
    
    cout << "\n--- Summary of Scope Resolution Operator (::) ---\n";
    cout << "1. ClassName::functionName - Access class function defined outside class\n";
    cout << "2. ::variableName - Access global variable when local variable shadows it\n";
    cout << "3. ClassName::staticVariable - Access static member variable\n";
    cout << "4. std::cout, std::cin - Access from std namespace\n";
    
    return 0;
}

q7)
#include <iostream>
#include <cstdlib>
using namespace std;

// =============== QUESTION 7: NAMESPACE IMPLEMENTATION ===============

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
    cout << "========== QUESTION 7: NAMESPACE IMPLEMENTATION ==========\n\n";
    
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
