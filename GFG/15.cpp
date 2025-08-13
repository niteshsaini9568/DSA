#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int i, int j){
    if(i >= j){
        return;
    }

    swap(arr[i], arr[j]);
    reverse(arr, ++i, --j);
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    reverse(arr, 0, size-1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}