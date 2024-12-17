# include <bits/stdc++.h>
using namespace std;

void rotateArray(int arr[], int size){
    int temp = arr[0];
}

int main(){

    int size;

    cout << "Enter the size of the array" ;
    cin >> size;

    int arr[size];
    cout << "Enter the digits for the array";
    
    for (int i = 0; i < size; i++ ){
        cin >> arr[i];
    }

    rotateArray(arr , size);
}
