// Q1(h): Find max and min in a single scan
#include <iostream>
using namespace std;

void findMaxAndMin(int* numbers, int arraySize) {
    int maximumValue = numbers[0];
    int minimumValue = numbers[0];

    for (int idx = 1; idx < arraySize; idx++) {
        if (numbers[idx] > maximumValue) maximumValue = numbers[idx];
        if (numbers[idx] < minimumValue) minimumValue = numbers[idx];
    }

    cout << maximumValue << " " << minimumValue;
}

int main() {
    int arr[] = {5,2,9,1};
    findMaxAndMin(arr,4);
    return 0;
}
