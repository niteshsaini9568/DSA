class Solution {
  public:
    int minCost(vector<int> &keys, vector<int> &freq) {
        int n = keys.size();
        
        // Create a 2D DP table to store minimum costs for subarrays of keys
        vector<vector<int>> dp(n, vector<int>(n, 0));
        
        // Base case: cost of a single key is its frequency
        for (int i = 0; i < n; i++) {
            dp[i][i] = freq[i];
        }
        
        // Consider chains of length 2 to n
        for (int l = 2; l <= n; l++) {
            for (int i = 0; i <= n - l; i++) {
                // j is the ending index of the chain
                int j = i + l - 1;
                dp[i][j] = INT_MAX;
                
                // Calculate total frequency sum of keys in current range
                int fsum = 0;
                for (int k = i; k <= j; k++)
                    fsum += freq[k];
                
                // Try each key in range [i..j] as root
                for (int r = i; r <= j; r++) {
                    // Cost when keys[r] is root:
                    // cost of left subtree + cost of right subtree + sum of frequencies
                    int c = ((r > i) ? dp[i][r - 1] : 0) + 
                            ((r < j) ? dp[r + 1][j] : 0) + 
                            fsum;
                    
                    // Update minimum cost
                    if (c < dp[i][j]) {
                        dp[i][j] = c;
                    }
                }
            }
        }
        
        // dp[0][n-1] stores minimum cost for all keys
        return dp[0][n - 1];
    }
};