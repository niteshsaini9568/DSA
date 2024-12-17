
// This is the code for binary search 

# include <bits/stdc++.h>
using namespace std;

int binary_search(int* arr , int size , int key){
    int start=0;
    int end =size-1;
    while (start<=end) {
        int mid = (start+end)/2;  // integer division
        if (arr[mid] == key ) {
        return mid;
        }
        else if (arr[mid] > key ){
            end = mid -1 ;
        } 
        else {
            start = mid +1 ;
        }
    }
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key; 
    cout << "Type a number: "; 
    cin >> key; 
    cout<< "The index of the element 5is " << binary_search(arr,size,key);
    return 0;
}