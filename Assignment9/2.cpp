#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

void count_alpha() {
    ifstream f("NOTES.TXT");
    char ch;
    int c = 0;

    while (f.get(ch)) {
        if (isalpha(ch)) c++;
    }

    cout << c;
}

int main() {
    count_alpha();
}
