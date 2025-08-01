#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 0, 3};
    int sum = 0;
    int c_sum = 0;

    for(int i = 0; i < 4; i++){
        sum = sum + arr[i];
    }

    for(int i = 0; i < 4; i++){
        sum = sum - arr[i];

        if(c_sum == sum){
            cout << i << endl;
        }

        c_sum = c_sum + arr[i];
    }

    return 0;
}
