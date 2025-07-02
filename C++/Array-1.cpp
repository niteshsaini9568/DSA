#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,5,6,9,7,2,5,8,6,4,7,8};
    int largest = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int i = 0; i < n; i++ ){
        if (arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}