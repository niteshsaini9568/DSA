#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {100, 200, 300, 400};
    int k = 2; 
    int n = 4;

    int sum = INT_MIN;
    int total = 0;

    for(int i = 0; i < k; i++){
        total += arr[i];
    }

    for(int i = 1; i <= n - k; i++){
        total = total - arr[i - 1] + arr[i + k - 1]; 
        sum = max(sum, total);
    }

    cout << "Maximum sum: " << sum << endl;

    return 0;
}
