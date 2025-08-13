#include <bits/stdc++.h>
using namespace std;

bool palindrome(char arr[], int i, int j){
    if(i >= j){
        return true;  
    }

    
    if(tolower(arr[i]) != tolower(arr[j])){
        return false;  
    }

    
    return palindrome(arr, i + 1, j - 1);
}

int main(){
    char arr[] = "MaM"; 
    int size = strlen(arr); 
    cout << palindrome(arr, 0, size - 1);
    
    return 0;
}
