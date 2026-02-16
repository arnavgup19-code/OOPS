// Q5(a): Display students in doubly linked list

#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct StudentNode {
    int studentId;
    char studentName[50];
    struct StudentNode* previousStudent;
    struct StudentNode* nextStudent;
};

StudentNode* createStudentNode(int studentId, const char* name) {
    StudentNode* newStudent = (StudentNode*)malloc(sizeof(StudentNode));
    newStudent->studentId = studentId;
    strcpy(newStudent->studentName, name);
    newStudent->previousStudent = NULL;
    newStudent->nextStudent = NULL;
    return newStudent;
}

void displayStudentsForward(StudentNode* headStudent) {
    StudentNode* currentStudent = headStudent;
    while (currentStudent != NULL) {
        cout << currentStudent->studentId << " " << currentStudent->studentName << endl;
        currentStudent = currentStudent->nextStudent;
    }
}

int main() {
    StudentNode* classList = createStudentNode(201, "John");
    classList->nextStudent = createStudentNode(202, "Sarah");
    classList->nextStudent->previousStudent = classList;

    displayStudentsForward(classList);

    return 0;
}
