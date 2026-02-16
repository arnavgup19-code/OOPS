// Q1(f): Find pair with sum k

#include <iostream>
using namespace std;

bool findPairWithSum(int* numbers, int arraySize, int targetSum) {
    for (int idx = 0; idx < arraySize; idx++) {
        for (int jdx = idx + 1; jdx < arraySize; jdx++) {
            if (numbers[idx] + numbers[jdx] == targetSum) {
                cout << numbers[idx] << " " << numbers[jdx];
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4};
    findPairWithSum(arr,4,5);
    return 0;
}
