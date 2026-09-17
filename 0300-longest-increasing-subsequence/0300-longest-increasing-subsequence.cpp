class Solution {
public:
    int dp[2501][2501];
    int solve(vector<int>& nums, int i, int p, int n){
        if(i >= n) return 0;

        if(p != -1 && dp[i][p] != -1) return dp[i][p];

        // Take
        int take = 0;
        if(p == -1 || nums[p] < nums[i]) { // Index can not be negative
            take = 1 + solve(nums, i + 1, i, n);
        }
        // Skip
        int skip = solve(nums, i + 1, p, n);

        int best = max(skip, take);
        if (p != -1) dp[i][p] = best;
        return best;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0, -1, n);
    }
};