#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,6,9,8,7,5,6,9,8,7,2};
    int largest = arr[0];
    int s_largest = INT_MIN;
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        if(arr[i] > largest && s_largest < largest){
            s_largest = largest;
            largest = arr[i];
        }
    }

    cout << "The Second Largest = " << s_largest;
}