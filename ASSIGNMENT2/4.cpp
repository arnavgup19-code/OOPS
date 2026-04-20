#include <iostream>
#include <cstdlib>
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
        cout << "\n=== Enter Rectangle Data ===\n";
        cout << "Width: ";
        cin >> width;
        cout << "Height: ";
        cin >> height;
    }
    
    void calculatearea() {
        int area = width * height;
        cout << "\n--- Rectangle Area Calculation ---\n";
        cout << "Width: " << width << "\n";
        cout << "Height: " << height << "\n";
        cout << "Area of Rectangle: " << area << " square units\n";
    }
    
    void displayDimensions() {
        cout << "\n--- Rectangle Dimensions ---\n";
        cout << "Width: " << width << "\n";
        cout << "Height: " << height << "\n";
    }
};

int main() {
   
    
    Rectangle *rect = (Rectangle *)malloc(sizeof(Rectangle));
    
    new (rect) Rectangle();
    
    rect->getdata();
    rect->displayDimensions();
    rect->calculatearea();
    
    cout << "\n\n--- Second Rectangle ---\n";
    rect->getdata();
    rect->displayDimensions();
    rect->calculatearea();
    
    free(rect);
    return 0;
}
