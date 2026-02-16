
// Q1(g): Find pair with sum k in sorted array
#include <iostream>
using namespace std;

bool findPairWithSumSorted(int* sortedNumbers, int arraySize, int targetSum) {
    int leftPointer = 0;
    int rightPointer = arraySize - 1;

    while (leftPointer < rightPointer) {
        int currentSum = sortedNumbers[leftPointer] + sortedNumbers[rightPointer];
        if (currentSum == targetSum) {
            cout << sortedNumbers[leftPointer] << " " << sortedNumbers[rightPointer];
            return true;
        } else if (currentSum < targetSum) leftPointer++;
        else rightPointer--;
    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4,5};
    findPairWithSumSorted(arr,5,6);
    return 0;
}
