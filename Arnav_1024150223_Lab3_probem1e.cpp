// Q1(e): Find duplicates in unsorted array

#include <iostream>
using namespace std;

void findDuplicatesUnsorted(int* unsortedNumbers, int arraySize) {
    for (int idx = 0; idx < arraySize; idx++) {
        for (int jdx = idx + 1; jdx < arraySize; jdx++) {
            if (unsortedNumbers[idx] == unsortedNumbers[jdx]) {
                cout << unsortedNumbers[idx] << " ";
                break;
            }
        }
    }
}

int main() {
    int arr[] = {1,3,1,4,4};
    findDuplicatesUnsorted(arr,5);
    return 0;
}
