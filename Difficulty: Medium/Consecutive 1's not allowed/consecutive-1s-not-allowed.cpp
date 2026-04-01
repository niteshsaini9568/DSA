class Solution {
  public:
    vector<vector<int>> multiply(vector<vector<int>>& v1, vector<vector<int>>& v2) {
        vector<vector<int>> ans(2, vector<int>(2, 0));
    
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                for (int k = 0; k < 2; k++) {
                    ans[i][j] += v1[i][k] * v2[k][j];
                }
            }
        }
    
        return ans;
    }
    
    // Function to find matrix to the power n.
    vector<vector<int>> power(vector<vector<int>> &v, int n) {
        if (n == 0) {
            return {{1, 0}, {0, 1}};
        }
    
        vector<vector<int>> res = power(v, n / 2);
    
        res = multiply(res, res);
    
        if (n % 2 == 1)
            res = multiply(res, v);
    
        return res;
    }
    
    int countStrings(int n) {
        if (n == 2)
            return 3;
        if (n == 1)
            return 2;
        vector<vector<int>> v = {{1, 1}, {1, 0}};
        vector<vector<int>> p = power(v, n - 2);
    
        int ans = p[0][0] * 3 + p[0][1] * 2;
        return ans;
    }
};