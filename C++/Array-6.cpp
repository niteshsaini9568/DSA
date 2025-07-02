#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 3, 4, 5, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int arr2[n];  
    int uniqueCount = 0;

    arr2[uniqueCount++] = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) { 
            arr2[uniqueCount++] = arr[i];
        }
    }

    for (int i = 0; i < uniqueCount; i++) {
        cout << arr2[i] << " ";
    }

    return 0;
}