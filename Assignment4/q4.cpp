#include <iostream>
using namespace std;

class Sample {
    int value;

public:
    Sample() {
        value = 0;
        cout << "Default constructor called\n";
    }

    Sample(int v) {
        value = v;
        cout << "Parameterized constructor called\n";
    }

    void show() {
        cout << "Value = " << value << endl;
    }

    ~Sample() {
        cout << "Destructor called\n";
    }
};

int main() {
    int *pInt = new int(10);
    cout << "Dynamic int: " << *pInt << endl;
    delete pInt;

    float *pFloat = new float(3.14);
    cout << "Dynamic float: " << *pFloat << endl;
    delete pFloat;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    cout << "Integer array: ";
    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << endl;

    delete[] arr;

    Sample *obj = new Sample(25);
    obj->show();
    delete obj;

    Sample *objArr = new Sample[2];
    objArr[0] = Sample(5);
    objArr[1] = Sample(10);

    objArr[0].show();
    objArr[1].show();

    delete[] objArr;

    return 0;
}