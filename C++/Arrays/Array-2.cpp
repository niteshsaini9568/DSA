// Second Largest in the array

# include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,5,6,9,8,9,7,1,2,3,6,4,5,9,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    int largest = arr[0];
    int second_largest = -1;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] > second_largest && arr[i] != largest){
            second_largest = arr[i];
        }
    }

    cout << "Second Largest " << second_largest;
}