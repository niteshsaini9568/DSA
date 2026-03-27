class Solution {
  public:
    int maxChocolate(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        
        // dp[j1][j2] = max chocolates from current row to bottom
        vector<vector<int>> dp(m, vector<int>(m, 0));
        
        // Base case: last row
        for (int j1 = 0; j1 < m; j1++)
            for (int j2 = 0; j2 < m; j2++)
                dp[j1][j2] = grid[n-1][j1] + (j1 != j2 ? grid[n-1][j2] : 0);
        
        // Fill bottom-up
        for (int row = n - 2; row >= 0; row--) {
            vector<vector<int>> curr(m, vector<int>(m, 0));
            
            for (int j1 = 0; j1 < m; j1++) {
                for (int j2 = 0; j2 < m; j2++) {
                    int chocolates = grid[row][j1] + (j1 != j2 ? grid[row][j2] : 0);
                    
                    int best = 0;
                    for (int d1 : {-1, 0, 1}) {
                        for (int d2 : {-1, 0, 1}) {
                            int nj1 = j1 + d1, nj2 = j2 + d2;
                            if (nj1 >= 0 && nj1 < m && nj2 >= 0 && nj2 < m)
                                best = max(best, dp[nj1][nj2]);
                        }
                    }
                    
                    curr[j1][j2] = chocolates + best;
                }
            }
            
            dp = curr;
        }
        
        return dp[0][m - 1];
    }
};