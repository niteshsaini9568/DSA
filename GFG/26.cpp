#include <bits/stdc++.h>
using namespace std;

void binary_search(int arr[], int n, int x) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) {
            cout << "Element found at index: " << mid << endl;
            return;
        }
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    cout << "Element not found" << endl;
}

int main(){
    int n, x;
    cout << "Enter number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> x;
    binary_search(arr, n, x);
    cout << "Search completed." << endl;
    cout << "Thank you for using the binary search program!" << endl;
    cout << "Have a great day!" << endl;
    return 0;
}