class Solution {
public:
    // int findLongestChain(vector<vector<int>>& pairs) {
    //     sort(pairs.begin(), pairs.end());
    //     int n = pairs.size();
    //     vector<int> dp(n, 1);
    //     int ans = 1;

    //     for(int i = 1; i < n; i++){
    //         for(int j = 0; j < i; j++){
    //             if(pairs[j][1] < pairs[i][0]){
    //                 dp[i] = max(dp[i], dp[j] + 1);
    //             }
    //         }
    //         ans = max(ans, dp[i]);
    //     }

    //     return ans;
    // }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(), pairs.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] < b[1];
        });

        int count = 0, chainEnd = INT_MIN;
        for (const auto& pair : pairs)
            if (pair[0] > chainEnd) { count++; chainEnd = pair[1]; }

        return count;
    }

};