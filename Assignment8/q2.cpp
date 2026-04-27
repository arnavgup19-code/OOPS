#include <iostream>
using namespace std;

template <class T>
T findMin(T arr[], int n){
    T min = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }

    return min;
}

int main(){
    int a[] = {5, 2, 8, 1, 9};
    cout << "Min (int): " << findMin(a, 5) << "\n";

    float b[] = {2.5, 1.2, 3.8};
    cout << "Min (float): " << findMin(b, 3) << "\n";

    return 0;
}
