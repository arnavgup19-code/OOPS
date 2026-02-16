#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int element) {
    for(int i = 0; i < n; i++) {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, element;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> element;

    int index = linearSearch(arr, n, element);

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}