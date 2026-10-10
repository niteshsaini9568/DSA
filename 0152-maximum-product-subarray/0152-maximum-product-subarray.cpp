class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int n = nums.size();

        int max_curr = nums[0];
        int min_curr = nums[0];

        int maxp = nums[0];

        for(int i = 1; i < n; i++) {

            int prevMax = max_curr;
            int prevMin = min_curr;

            max_curr = max(nums[i], max(prevMax * nums[i], prevMin * nums[i]));
            min_curr = min(nums[i], min(prevMax * nums[i], prevMin * nums[i]));
            maxp = max(maxp, max_curr);
        }

        return maxp;
    }
};