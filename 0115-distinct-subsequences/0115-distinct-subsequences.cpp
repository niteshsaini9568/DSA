class Solution {
public:
    typedef unsigned long long ull;
    ull dp[1001][1001];

    ull solve(string& s, string& t, int m, int n) {
        if (n == 0) return 1;            // t exhausted, one valid way
        if (m == 0) return 0;            // s exhausted, t is not
        if (dp[m][n] != (ull)-1) return dp[m][n];

        ull ways = solve(s, t, m - 1, n);          // skip s[m-1]
        if (s[m - 1] == t[n - 1])
            ways += solve(s, t, m - 1, n - 1);     // also match it

        return dp[m][n] = ways;
    }

    int numDistinct(string s, string t) {
        int m = s.length();
        int n = t.length();
        memset(dp, -1, sizeof(dp));
        return (int)solve(s, t, m, n);
    }
};