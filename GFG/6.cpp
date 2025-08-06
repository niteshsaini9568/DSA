#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {-1,0};
    int target = -1;
    int n = 2;

    int i = 0, j = n - 1;

    while(i < j){  
        int sum = arr[i] + arr[j];
        if(sum > target){
            j--;
        }else if (sum < target){
            i++;
        }else{
            cout << "Pair found: " << arr[i] << " + " << arr[j] << " = " << target << endl;
            cout << "Initial Index = " << i + 1 << " and Final Index = " << j + 1 << endl;
            return 0;  
        }
    }

    cout << "No pair found with the target sum." << endl;

    return 0;
}
