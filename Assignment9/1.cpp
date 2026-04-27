#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("NUM.TXT");
    for (int i = 1; i <= 200; i++) f << i << " ";
    f.close();

    ifstream in("NUM.TXT");
    ofstream odd("odd.txt");
    ofstream even("even.txt");
    int n;

    while (in >> n) {
        if (n % 2 == 0) even << n << "\n";
        else odd << n << "\n";
    }
}
