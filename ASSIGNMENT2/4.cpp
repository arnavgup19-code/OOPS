#include <iostream>
using namespace std;


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
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;
    }
    
    void calculatearea() {
        int area = width * height;
        cout << area << "\n";
    }
    
    void displayDimensions() {
        cout << "Width: " << width << "\n";
        cout << "Height: " << height << "\n";
    }
};

int main() {
   
    
    Rectangle *rect = new Rectangle;
    
    rect->getdata();
    rect->displayDimensions();
    rect->calculatearea();
    
    cout << "\n";
    rect->getdata();
    rect->displayDimensions();
    rect->calculatearea();
    
    delete rect;
    return 0;
}
