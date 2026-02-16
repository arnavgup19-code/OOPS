#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int element) {
    int left = 0, right = n - 1;
    
    while(left <= right) {
        int mid = left + (right - left) / 2;
        
        if(arr[mid] == element) {
            return mid;
        }
        else if(arr[mid] < element) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, element;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> element;

    int index = binarySearch(arr, n, element);

    if(index != -1)
        cout << "Element found at index " << index;
    else
        cout << "Element not found";

    return 0;
}
