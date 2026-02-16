// Q1(d): Find duplicates in sorted array

#include <iostream>
using namespace std;

void findDuplicatesSorted(int* sortedNumbers, int arraySize) {
    for (int idx = 0; idx < arraySize - 1; idx++) {
        if (sortedNumbers[idx] == sortedNumbers[idx + 1]) {
            cout << sortedNumbers[idx] << " ";
        }
    }
}

int main() {
    int arr[] = {1,1,2,3,3};
    findDuplicatesSorted(arr,5);
    return 0;
}
