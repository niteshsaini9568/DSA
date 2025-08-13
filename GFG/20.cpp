// Subset Sum

#include <bits/stdc++.h>
using namespace std;

void subset_sum(int i, int arr[], int n, int target, vector<int> &P, vector<vector<int>> &ans) {
    if( i == n ){
        ans.push_back(P);
        return;
    }
    subset_sum(i + 1, arr, n, target, P, ans); 
    P.push_back(arr[i]); // Include
    subset_sum(i + 1, arr, n, target, P, ans);
}

int main() {
    int arr[] = {3, 34, 4, 12, 5, 2};
    int n = sizeof(arr)/sizeof(int);
    int target = 9;
    vector<vector<int>> ans;
    vector<int> P;
    int sum = 0;

    subset_sum(0, arr, n, target, P, ans);

    for (auto &subset : ans) {
        for (auto &num : subset){
            sum = sum + num;
            if(sum == target){
                cout << "True";
                break;
            }
        };
    }

    return 0;
}
