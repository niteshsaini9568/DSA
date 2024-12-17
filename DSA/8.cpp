// Solving the first and the last occurence of the element in the array.


#include <iostream>
using namespace std;

void binary_search(int* arr, int size, int key) {
    int start = 0;
    int end = size - 1;
    int firstOccurrence = -1;
    int lastOccurrence = -1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            firstOccurrence = mid;
            end = mid - 1;  // Look in the left half for the first occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    start = 0;
    end = size - 1;

    while (start <= end) {
        int mid = (start + end) / 2;

        if (arr[mid] == key) {
            lastOccurrence = mid;
            start = mid + 1;  // Look in the right half for the last occurrence
        } else if (arr[mid] < key) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    if (firstOccurrence != -1 && lastOccurrence != -1) {
        cout << "The first index is " << firstOccurrence << " and the last index is " << lastOccurrence << endl;
    } else {
        cout << "Key not found in the array." << endl;
    }
}

int main() {
    int arr[11] = {1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Type a number: ";
    cin >> key;

    cout << "The first and last occurrence of the key is ";
    binary_search(arr, size, key);

    return 0;
}
