#include <iostream>
using namespace std;

void setElement(int arr[], int n, int index, int value) {
    if(index < 0 || index >= n) {
        cout << "Invalid index!" << endl;
        return;
    }
    arr[index] = value;
}

int main() {
    int n, index, value;
    int arr[100];

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter index: ";
    cin >> index;

    cout << "Enter new value: ";
    cin >> value;

    setElement(arr, n, index, value);

    cout << "Updated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
