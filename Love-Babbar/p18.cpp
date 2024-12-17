// First occurence

// To solve the these type of questions in which ans be like ho sakta hai ya nahi
// then use store and use concept

# include <bits/stdc++.h>
using namespace std;

int firstOccurrence(int *arr, int target, int size, int& index){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid] == target){
            index = mid;
            start = mid+1; // Last occurrence
            // end = mid-1; // First occurrence
        }
        else if(arr[mid] > target) end = mid-1;
        else start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return index;
}

int main(){

    int arr[] = {9,10,10,11,12,13,14,14};
    int target = 14;
    int size = sizeof(arr) / sizeof(arr[0]);
    int index = -1;

    int foundIndex = firstOccurrence(arr, target, size, index);

    cout << foundIndex << endl;

    return 0;
}