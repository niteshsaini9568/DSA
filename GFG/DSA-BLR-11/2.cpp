#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &nums, int k) {
	int n = nums.size();
    k = k % n;

    int store = 0;

    for(int i = n - 1; i >= 0; i--){
        store = nums[i];
        nums[n - i] = nums[n - i - 1];
        nums[n-i-1] = store;
    }

    for(int i = 0; i < nums.size(); i++){
    cout << nums[i] << " ";
    }
    cout << endl;
}

int main(){
    
    vector<int> A = {1, 2, 3, 4, 5, 6};
    int B = 2;
    rotateArray(A, B);
    return 0;
}