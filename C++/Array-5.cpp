// Checking the array contains duplicated numbers or not 

#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isDuplicated = false;

    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1]){
            isDuplicated = true; 
            break;
        }
    }
    if(isDuplicated){
        cout << "The array contains duplicated numbers" << endl;
    }else{
        cout << "The array does not contains duplicated numbers" << endl;
    }
}