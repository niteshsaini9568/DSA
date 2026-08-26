class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ops = 0;

        for(int i = 1; i < n; i++){
            if(nums[i-1] >= nums[i]){
                int diff = nums[i-1] - nums[i] + 1;
                nums[i] += diff;
                ops += diff;
            }
        }
        return ops;
    }
};