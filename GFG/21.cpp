// Subset Sum
#include <bits/stdc++.h>
using namespace std;

bool subset_sum(int arr[], int n, int sum, int i) {
    if (sum == 0) {
        return true; 
    }
    if (i == n) {
        return false; 
    }

    bool take = false;
    if (arr[i] <= sum) {
        take = subset_sum(arr, n, sum - arr[i], i + 1);
    }

    bool no_take = subset_sum(arr, n, sum, i + 1);

    return take || no_take; 
}


int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(arr)/sizeof(int);
    int sum = 9;

    cout << subset_sum(arr, n, sum, 0);
    
    return 0;
}
