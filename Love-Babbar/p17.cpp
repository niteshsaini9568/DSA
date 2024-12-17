#include <bits/stdc++.h>
using namespace std;

bool binary_Search(int *arr, int target, int size)
{
    int l = 0;                 
    int e = size - 1;          
    int mid = l + (e - l) / 2; 
    while (l <= e){
        if (arr[mid] == target) return true;
        else if (arr[mid] > target) e = mid - 1; 
        else l = mid + 1;
        mid = l + (e - l) / 2; 
    }
    return false; 
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int target = 5;
    int size = sizeof(arr) / sizeof(arr[0]); 

    bool found = binary_Search(arr, target, size);

    if (found) cout << "The target is found";
    else cout << "The target is not found";
    return 0;
}
