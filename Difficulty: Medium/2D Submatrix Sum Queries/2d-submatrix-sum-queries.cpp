class Solution {
  public:
    vector<int> prefixSum2D(vector<vector<int>> &mat, vector<vector<int>> &queries) {
        int n = mat.size();
        int m = mat[0].size();
        
        vector<vector<int>> prefix(n + 1, vector<int>(m + 1, 0));
        
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                prefix[i][j] = mat[i-1][j-1] + prefix[i-1][j] + prefix[i][j-1] - prefix[i-1][j-1];
            }
        }
        
        vector<int> result;
        for (auto& query : queries) {
            int r1 = query[0], c1 = query[1], r2 = query[2], c2 = query[3];
            int sum = prefix[r2+1][c2+1] - prefix[r1][c2+1] - prefix[r2+1][c1] + prefix[r1][c1];
            result.push_back(sum);
        }
        
        return result;
    }
};