#include<bits/stdc++.h>
using namespace std;

int main(){
    int d;
    cout << "Enter the rotation number" << endl;
    cin >> d;

    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int temp[d];

    for(int i = 0; i < d; i++){
        temp[i] = arr[i];
    };

    cout << "Loop 1" << endl;

    for(int i = 0; i < d; i++){
        cout << temp[i] << " ";
    };
    
    cout << endl;
 
    for(int i = d; i < n; i++){
        arr[i-d] = arr[i];
    };

    cout << "Loop 2" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    };

    cout << endl;

    for(int i = 0; i <= d; i++){
        arr[n-d] = temp[i];
        d--;
    }

     cout << "Result" << endl;

    for(int i = 0; i < n; i++){
        cout << arr[i] << " " ;
    };

}