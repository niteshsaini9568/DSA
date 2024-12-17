#include <iostream>
using namespace std;

int find_peak_element(int* arr, int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            // If increasing, move towards the right
            start = mid + 1;
        } else {
            // If decreasing or equal, move towards the left
            end = mid;
        }
    }

    // 'start' now points to the peak element
    return start;
}

int main() {
    int arr[9] = {1,2,3,4,5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int peak_index = find_peak_element(arr, size);

    cout << "Peak Element in the mountain array is at index: " << peak_index << endl;

    return 0;
}
