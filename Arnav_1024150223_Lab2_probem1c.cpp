#include <iostream>
#include <cstdlib>
using namespace std;

void insertAtPosition(int *arr, int &n, int pos, int element) {
    for(int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    n++;
}

int main() {
    int n, pos, element;
    int *arr;
    cout << "Enter number of elements: ";
    cin >> n;

    arr = (int *)malloc((n + 1) * sizeof(int));

    if(arr == NULL) {
        cout << "Memory allocation failed";
        return 0;
    }

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter position (0 to " << n << "): ";
    cin >> pos;

    if(pos < 0 || pos > n) {
        cout << "Invalid position";
        free(arr);
        return 0;
    }

    cout << "Enter element to insert: ";
    cin >> element;

    insertAtPosition(arr, n, pos, element);

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    free(arr);
    return 0;
}
