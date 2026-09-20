class Solution {
public:
    vector<vector<int>> dp;

    int solve(vector<vector<int>>& pairs, int i, int p){
        int n = pairs.size();
        if(i >= n) return 0;
        if(dp[i][p + 1] != -1) return dp[i][p + 1];

        int skip = solve(pairs, i + 1, p);
        int take = 0;
        if(p == -1 || pairs[p][1] < pairs[i][0]){
            take = 1 + solve(pairs, i + 1, i);
        }

        return dp[i][p + 1] = max(skip, take);
    }

    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end());
        int n = pairs.size();
        dp.assign(n, vector<int>(n + 1, -1));
        return solve(pairs, 0, -1);
    }
};