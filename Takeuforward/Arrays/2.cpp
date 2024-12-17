#include <bits/stdc++.h>
using namespace std;

void secondLargest(int arr[], int n){
    int max = INT_MIN, secondMax = INT_MIN;

    for( int i = 0; i < n; i++){
        if(arr[i]>max){
            secondMax = max;
            max = arr[i];
        }else{
            if(arr[i] > secondMax && arr[i] != max){
                secondMax = arr[i];
            }
        }
    }

    cout << "Second largest no. is = " << secondMax;
}

int main(){

    int arr[6];

    cout << "Give the 6 inputs for the array: ";

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    secondLargest(arr, 6);

    return 0;
}