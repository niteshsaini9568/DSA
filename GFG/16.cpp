#include <bits/stdc++.h>
using namespace std;

bool palindrome(char arr[], int i, int j){
    if(i >= j){
        return;
    }

    if(arr[i] == arr[j]){
        return true;
    }else{
        return false;
    }
    palindrome(arr, ++i, --j);
}

int main(){
    char arr[] = "Nitesh saini";
    int size = sizeof(arr)/sizeof(arr[0]);

    cout << palindrome(arr, 0, size-1);;
    
    return 0;
}