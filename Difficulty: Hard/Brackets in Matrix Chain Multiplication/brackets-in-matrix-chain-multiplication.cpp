class Solution {
public:
    string matrixChainOrder(vector<int> &arr) {
        int n = arr.size();
        vector<vector<pair<string, int>>> dp(n, vector<pair<string, int>>(n, {"", 0}));
        
        for (int i = 0; i < n; i++) {
            string temp = "";
            temp += char('A' + i);
            dp[i][i] = {temp, 0};
        }
        
        for (int len = 2; len < n; len++) {
            for (int i = 0; i < n - len; i++) {
                int j = i + len - 1;
                int cost = INT_MAX;
                string str;
                
                for (int k = i + 1; k <= j; k++) {
                    int currCost = dp[i][k - 1].second + 
                                   dp[k][j].second + 
                                   arr[i] * arr[k] * arr[j + 1];
                    
                    if (currCost < cost) {
                        cost = currCost;
                        str = "(" + dp[i][k - 1].first + dp[k][j].first + ")";
                    }
                }
                dp[i][j] = {str, cost};
            }
        }
        
        return dp[0][n - 2].first;
    }
};