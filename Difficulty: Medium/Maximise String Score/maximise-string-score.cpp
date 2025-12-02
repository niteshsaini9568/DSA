class Solution {
public:
    int maxScore(string &s, vector<vector<char>> &jumps) {
        int n = s.length();
        
        // Prefix sum of ASCII values
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + s[i];
        }
        
        // Character-specific prefix sums (for each letter a-z)
        vector<vector<long long>> charPrefix(26, vector<long long>(n + 1, 0));
        for (int i = 0; i < n; i++) {
            int c = s[i] - 'a';
            for (int ch = 0; ch < 26; ch++) {
                charPrefix[ch][i + 1] = charPrefix[ch][i];
            }
            charPrefix[c][i + 1] += s[i];
        }
        
        // Build jump transition matrix
        vector<vector<bool>> canJump(26, vector<bool>(26, false));
        for (int i = 0; i < 26; i++) {
            canJump[i][i] = true; // Same character jumps allowed
        }
        for (auto& jump : jumps) {
            int src = jump[0] - 'a';
            int dest = jump[1] - 'a';
            canJump[src][dest] = true;
        }
        
        // best[src][dest] = maximum (dp[j] - prefix[j] + charPrefix[dest][j])
        // where j is a position with character src
        vector<vector<long long>> best(26, vector<long long>(26, LLONG_MIN));
        
        // dp[i] = maximum score ending at position i
        vector<long long> dp(n, LLONG_MIN);
        dp[0] = 0;
        
        // Initialize best for first character
        int firstChar = s[0] - 'a';
        for (int dest = 0; dest < 26; dest++) {
            best[firstChar][dest] = 0 - prefix[0] + charPrefix[dest][0];
        }
        
        // DP: process each position
        for (int i = 1; i < n; i++) {
            int currChar = s[i] - 'a';
            long long maxVal = LLONG_MIN;
            
            // Find best previous position we can jump from
            for (int src = 0; src < 26; src++) {
                if (canJump[src][currChar] && best[src][currChar] != LLONG_MIN) {
                    maxVal = max(maxVal, best[src][currChar]);
                }
            }
            
            // Calculate dp[i]
            if (maxVal != LLONG_MIN) {
                dp[i] = maxVal + (prefix[i] - charPrefix[currChar][i]);
            }
            
            // Update best values for future positions
            if (dp[i] != LLONG_MIN) {
                for (int dest = 0; dest < 26; dest++) {
                    long long val = dp[i] - prefix[i] + charPrefix[dest][i];
                    best[currChar][dest] = max(best[currChar][dest], val);
                }
            }
        }
        
        // Find maximum score
        long long result = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i] != LLONG_MIN) {
                result = max(result, dp[i]);
            }
        }
        
        return (int)result;
    }
};