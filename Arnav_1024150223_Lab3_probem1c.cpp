// Q1(a): Union of two arrays

#include <iostream>
#include <cstdlib>
using namespace std;

int* findUnion(int* firstSet, int sizeFirst, int* secondSet, int sizeSecond, int* resultSize) {
    int* unionSet = (int*)malloc((sizeFirst + sizeSecond) * sizeof(int));
    int unionCount = 0;

    for (int idx = 0; idx < sizeFirst; idx++)
        unionSet[unionCount++] = firstSet[idx];

    for (int idx = 0; idx < sizeSecond; idx++) {
        bool elementExists = false;
        for (int jdx = 0; jdx < sizeFirst; jdx++) {
            if (secondSet[idx] == firstSet[jdx]) {
                elementExists = true;
                break;
            }
        }
        if (!elementExists)
            unionSet[unionCount++] = secondSet[idx];
    }

    *resultSize = unionCount;
    return unionSet;
}

int main() {
    int firstSet[] = {1,2,3};
    int secondSet[] = {3,4,5};
    int resultSize;

    int* result = findUnion(firstSet,3,secondSet,3,&resultSize);

    for(int i=0;i<resultSize;i++) cout<<result[i]<<" ";
    return 0;
}
