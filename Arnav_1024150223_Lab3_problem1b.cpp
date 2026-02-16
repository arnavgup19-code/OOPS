// Q1(b): Long addition using arrays
#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

void performLongAddition(int* firstNumber, int sizeFirst, int* secondNumber, int sizeSecond) {
    int maxSize = max(sizeFirst, sizeSecond) + 1;
    int* resultSum = (int*)malloc(maxSize * sizeof(int));
    int carry = 0;
    int resultIndex = 0;

    int idx1 = 0, idx2 = 0;
    while (idx1 < sizeFirst || idx2 < sizeSecond || carry) {
        int sum = carry;
        if (idx1 < sizeFirst) sum += firstNumber[idx1++];
        if (idx2 < sizeSecond) sum += secondNumber[idx2++];
        resultSum[resultIndex++] = sum % 10;
        carry = sum / 10;
    }

    for (int idx = resultIndex - 1; idx >= 0; idx--) cout << resultSum[idx];
}

int main() {
    int a[] = {5,4,3,2,1};
    int b[] = {6,5,4,3,2};
    performLongAddition(a,5,b,5);
    return 0;
}
