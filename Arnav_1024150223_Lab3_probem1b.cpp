// Q1(b): Merge two arrays

#include <iostream>
#include <cstdlib>
using namespace std;

int* mergeArrays(int* firstArray, int sizeFirst, int* secondArray, int sizeSecond) {
    int mergedSize = sizeFirst + sizeSecond;
    int* mergedResult = (int*)malloc(mergedSize * sizeof(int));

    for (int idx = 0; idx < sizeFirst; idx++)
        mergedResult[idx] = firstArray[idx];

    for (int idx = 0; idx < sizeSecond; idx++)
        mergedResult[sizeFirst + idx] = secondArray[idx];

    return mergedResult;
}

int main() {
    int firstArray[] = {1,2,3};
    int secondArray[] = {4,5};

    int* mergedArray = mergeArrays(firstArray,3,secondArray,2);

    for(int i=0;i<5;i++) cout<<mergedArray[i]<<" ";
    return 0;
}
