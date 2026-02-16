#include <iostream>
#include <cstdlib>
using namespace std;

void insertAtBeginning(int *arr, int &n, int element) {
    for(int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = element;
    n++;
}

int main() {
    int n, element;
    int *arr;

    cout << "Enter number of elements: ";
    cin >> n;

    arr = (int *)malloc((n + 1) * sizeof(int));

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to insert at beginning: ";
    cin >> element;

    insertAtBeginning(arr, n, element);

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    free(arr);
    return 0;
}
