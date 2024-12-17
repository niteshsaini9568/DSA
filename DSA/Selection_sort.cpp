#include <iostream>
using namespace std;

void Selection_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]); // Move the swap operation outside the inner loop
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int arr[8] = {6, 8, 9, 4, 7, 2, 5, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "According to the selection sort, the sorted array is:" << endl;
    Selection_sort(arr, size);

    return 0;
}
