// Q1(a): Intersection of two arrays

#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int* findIntersection(int* firstSet, int sizeFirst, int* secondSet, int sizeSecond, int* resultSize) {
    int* intersectionSet = (int*)malloc(min(sizeFirst, sizeSecond) * sizeof(int));
    int intersectionCount = 0;

    for (int idx = 0; idx < sizeFirst; idx++) {
        for (int jdx = 0; jdx < sizeSecond; jdx++) {
            if (firstSet[idx] == secondSet[jdx]) {
                intersectionSet[intersectionCount++] = firstSet[idx];
                break;
            }
        }
    }

    *resultSize = intersectionCount;
    return intersectionSet;
}

int main() {
    int a[] = {1,2,3};
    int b[] = {2,3,5};
    int size;

    int* res = findIntersection(a,3,b,3,&size);

    for(int i=0;i<size;i++) cout<<res[i]<<" ";
    return 0;
}
