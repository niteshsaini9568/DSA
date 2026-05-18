class Solution {
  public:
    unordered_map<int, int> memo;
    
    int maxSum(int n) {
        // Base cases
        if (n == 0) return 0;
        if (n == 1) return 1;
        
        // Return cached result if available
        if (memo.count(n)) return memo[n];
        
        // Choice 1: Take n as-is
        // Choice 2: Split into three parts recursively
        int splitSum = maxSum(n/2) + maxSum(n/3) + maxSum(n/4);
        
        memo[n] = max(n, splitSum);
        return memo[n];
    }
};