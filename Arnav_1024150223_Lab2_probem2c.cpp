#include <iostream>
using namespace std;

int getElement(int arr[], int n, int index) {
    if(index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return -1;
    }
    return arr[index];
}

int main() {
    int n, index;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter index: ";
    cin >> index;

    int value = getElement(arr, n, index);

    if(value != -1)
        cout << "Element at index " << index << " is " << value;

    return 0;
}
