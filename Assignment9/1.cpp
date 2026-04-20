#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream f("NUM.TXT");
    for (int i = 1; i <= 200; i++) f << i << " ";
}
