#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    void setData(int l, int w) {
        length = l;
        width = w;
    }

    int area() {
        return length * width;
    }
};

int main() {
    Rectangle rect[3];

    for (int i = 0; i < 3; i++) {
        int l, w;
        cout << "Enter length and width of rectangle " << i+1 << ": ";
        cin >> l >> w;
        rect[i].setData(l, w);
    }

    cout << "\nAreas:\n";
    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i+1 << ": " << rect[i].area() << "\n";
    }

    return 0;
}