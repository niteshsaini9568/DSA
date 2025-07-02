// To check whether the array is sorted or not

#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    bool isSorted = true;

    for(int i = 1; i < n; i++){
        if(arr[i] <= arr[i-1]){
            isSorted = false;
            break;
        }
    }

    if(isSorted){
        cout << "The array is sorted" << endl;
    }else{
        cout << "The array is not sorted" << endl;
    }

}