#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {11, 13, 17, 23, 29, 31, 7, 5, 2, 3};
    int k = 3; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int thr = 5;
    int count = 0;
    int sum = 0;

    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int avg = sum / k;

    if (avg >= thr) {
        count++;
    }

    for (int i = 1; i <= n - k; i++) {
        sum = sum - arr[i - 1] + arr[i + k - 1]; 
        int new_avg = sum / k;
        if (new_avg >= thr) {
            count++;
        }
    }

    cout << "Maximum count: " << count << endl;

    return 0;
}
