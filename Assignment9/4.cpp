#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream a("source.txt");
    ofstream b("copy.txt");
    char ch;

    while (a.get(ch)) b.put(ch);
}
