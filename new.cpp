#include <iostream>
#include <cstdlib>
using namespace std;

void insertAtEnd(int *arr, int &n, int element) {
    arr[n] = element;
    n++;
}

int main() {
    int n, element, extra;
    int *arr;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter number of elements to add: ";
    cin >> extra;

    arr = (int *)malloc((n + extra) * sizeof(int));

    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

   
    cout << "Enter " << extra << " elements to insert at end:\n";
    for(int i = 0; i < extra; i++) {
        cin >> element;
        insertAtEnd(arr, n, element);
    }

    cout << "Array after insertion:\n";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    free(arr);
    return 0;
}
