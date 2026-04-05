class Solution {
  public:
    int totalWays(vector<int>& arr, int target) {
        int totalSum = 0;
        for (int x : arr) {
            totalSum += x;
        }
        
        // 1. Boundary Checks
        // If the absolute target is greater than totalSum, it's impossible.
        // If (target + totalSum) is odd, we can't cleanly divide it by 2.
        if (abs(target) > totalSum || (target + totalSum) % 2 != 0) {
            return 0;
        }
        
        // 2. Find the target subset sum we need to reach
        int subsetSum = (target + totalSum) / 2;
        
        // 3. DP array to store the number of ways to reach each sum
        vector<int> dp(subsetSum + 1, 0);
        
        // Base case: 1 way to reach a sum of 0 (by picking no elements)
        dp[0] = 1;
        
        // 4. Build up the DP table
        for (int x : arr) {
            // Traverse backwards to avoid using the same element multiple times
            for (int j = subsetSum; j >= x; j--) {
                dp[j] += dp[j - x];
            }
        }
        
        return dp[subsetSum];
    }
};