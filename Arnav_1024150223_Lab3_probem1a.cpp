// Q1(a): Check if an array is sorted

#include <iostream>
using namespace std;

bool isArraySorted(int* numbers, int arraySize) {
    for (int index = 0; index < arraySize - 1; index++) {
        if (numbers[index] > numbers[index + 1]) return false;
    }
    return true;
}

int main() {
    int arraySize = 5;
    int numbers[] = {1,2,3,4,5};

    cout << (isArraySorted(numbers, arraySize) ? "Sorted" : "Not Sorted");
    return 0;
}
