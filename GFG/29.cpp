#include<bits/stdc++.h>
using namespace std;

int findKRotation(vector<int> &arr) {
        // Code Here
        int start = 0;
        int end = arr.size() - 1;
        int ret = 0;
        int n = arr.size();
        
        while(start <= end){
            if (arr[start] <= arr[end]) {
                return start;
            }
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            int prev = (mid + n - 1) % n;
            
            if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
                ret = mid;
                return ret;
            }

            if (arr[mid] >= arr[start]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        
        return ret;
    }


int main(){
    vector<int> arr = {15, 18, 2, 3, 6, 12};
    int k = findKRotation(arr);
    cout << "The array is rotated " << k << " times." << endl;
    return 0;
}