// Rotate an array

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int end = arr[n-1];

    for(int j = n-1; j > 0; j--){
        arr[j] = arr[j-1];
    }

    arr[0] = end;

    for(int j = 0; j < n; j++){
        cout << arr[j] << " " ;
    }
    return 0;
}