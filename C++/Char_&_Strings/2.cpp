#include<bits/stdc++.h>
using namespace std;

int getSize(char arr[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
    }
    return count;
}

int main(){
    char arr[50];

    cout << "enter Your Name = ";
    cin >> arr;

    int size = getSize(arr, 50);
    cout << "The length of your name is = " << size;
}