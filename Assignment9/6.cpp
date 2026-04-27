#include <iostream>
#include <fstream>
using namespace std;
int main() {
    ofstream f1("az.txt");
    for (char ch = 'A'; ch <= 'Z'; ch++) f1 << ch;
    f1.close();

    ifstream a("az.txt");
    char ch;
    a.seekg(9);
    a.get(ch);
    cout << ch << "\n";
    a.close();

    fstream b("num.txt", ios::out);
    for (int i = 1; i <= 9; i++) b << i;
    b.close();

    b.open("num.txt", ios::in | ios::out);
    b.seekp(4);
    b << 0;
    b.seekg(0, ios::end);
    cout << b.tellg() << "\n";
    b.seekg(-1, ios::end);
    b.get(ch);
    cout << ch << "\n";
    b.close();

    ofstream c("data.txt");
    c << "first line\nsecond line\nthird line";
    c.close();

    ifstream d("data.txt");
    d.seekg(10);
    cout << d.tellg() << "\n";
    while (d.get(ch)) cout << ch;
    d.close();
    cout << "\n";

    fstream e("hello.txt", ios::out | ios::in | ios::trunc);
    char s[] = "HelloWorld";
    for (int i = 0; s[i] != '\0'; i++) {
        e << s[i];
        cout << e.tellp() << " ";
    }
    e.seekp(5);
    e << "C++";
    e.close();

    ifstream x("hello.txt");
    while (x.get(ch)) cout << ch;
}
