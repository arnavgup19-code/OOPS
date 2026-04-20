#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char s[100];
    cin.getline(s, 100);

    int n = 0;
    while (s[n] != '\0') n++;

    ofstream out("text.txt");
    out << s;
    out.close();

    ifstream in("text.txt");
    char ch;

    cout << n << "\n";
    while (in.get(ch)) cout << ch;
}
