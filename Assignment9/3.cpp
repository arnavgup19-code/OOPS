#include <iostream>
#include <fstream>
using namespace std;

class student {
public:
    int roll;
    char name[30];
};

int main() {
    student s1, s2;

    cout << "enter roll and name: ";
    cin >> s1.roll >> s1.name;

    ofstream out("student.dat", ios::binary);
    out.write((char*)&s1, sizeof(s1));
    out.close();

    ifstream in("student.dat", ios::binary);
    in.read((char*)&s2, sizeof(s2));

    cout << s2.roll << " " << s2.name;
}
