#include <iostream>
using namespace std;
class Sample {
    int value;

public:
    Sample() {
        value = 0;
    }

    Sample(int v) {
        value = v;
    }

    void show() {
        cout << value << "\n";
    }

    ~Sample() {}
};

int main() {
    int *pInt = new int(10);
    cout << *pInt << "\n";
    delete pInt;

    float *pFloat = new float(3.14);
    cout << *pFloat << "\n";
    delete pFloat;

    int *arr = new int[3];
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;

    for (int i = 0; i < 3; i++)
        cout << arr[i] << " ";
    cout << "\n";

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
