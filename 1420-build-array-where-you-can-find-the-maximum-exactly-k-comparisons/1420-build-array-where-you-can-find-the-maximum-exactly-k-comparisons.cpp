class Solution {
public:
    const int MOD = 1e9 + 7;
    int N, M, K;
    vector<vector<vector<int>>> dp;

    int solve(int idx, int search_cst, int maxSoFar){
        if(search_cst > K) return 0;
        if(idx == N) return (search_cst == K) ? 1 : 0;

        if(dp[idx][search_cst][maxSoFar] != -1) return dp[idx][search_cst][maxSoFar];

        long long result = 0;
        for(int i = 1; i <= M; i++){
            if(i > maxSoFar){
                result += solve(idx + 1, search_cst + 1, i);
            }else{
                result += solve(idx + 1, search_cst, maxSoFar);
            }
        }

        return dp[idx][search_cst][maxSoFar] = result % MOD;
    }

    int numOfArrays(int n, int m, int k) {
        N = n; M = m; K = k;
        dp.assign(n, vector<vector<int>>(k + 1, vector<int>(m + 1, -1)));
        return solve(0, 0, 0);
    }
};