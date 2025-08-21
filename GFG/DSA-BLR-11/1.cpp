#include<bits/stdc++.h>
using namespace std;

int First(int arr[], int n, int key) {
    int start = 0, end = n - 1, result = -1;
    
    while(start <= end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == key) {
            result = mid;
            end = mid - 1; 
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return result;
}

int Last(int arr[], int n, int key) {
    int start = 0, end = n - 1, result = -1;
    while(start <= end) {
        int mid = start + (end - start) / 2;
        if(arr[mid] == key) {
            result = mid;
            start = mid + 1;
        }
        else if(arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return result;
}

int main(){
    int arr[] = {2,4,4,16,16,16,16,16,16,16,32,64,128,256};
    int n = sizeof(arr)/sizeof(arr[0]);

    int key;
    cout << "Enter the value to search: ";
    cin >> key;

    int first = First(arr, n, key);
    int last = Last(arr, n, key);

    if(first == -1) {
        cout << "Not found" << endl;
    } else {
        cout << "First occurrence at index: " << first << endl;
        cout << "Last occurrence at index: " << last << endl;
    }
    return 0;
}