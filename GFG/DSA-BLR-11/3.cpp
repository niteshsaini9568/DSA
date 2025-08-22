#include <bits/stdc++.h>
using namespace std;

bool canShip(vector<int> nums, int days, int mid){
    int curr = 0, total_days = 1;
    for (int w : nums) {
        if (curr + w > mid) {
            total_days++;
            curr = 0;
        }
        curr += w;
    }
    return total_days <= days;
}

int min_weight(vector<int> nums, int days){
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    int ans = high;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(canShip(nums, days, mid)){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
    return ans;
}

int main(){

    vector<int> arr = {1,2,3,4,5,6,7,8,9,10};
    int days = 5;
    cout << "The minimum weight of the ship is = " << min_weight(arr,days) << endl;
    return 0;
}

