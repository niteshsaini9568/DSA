class Solution {
  public:
    int maxDotProduct(vector<int> &a, vector<int> &b)
{
    int m = a.size();
    int n = b.size();

    vector<int> dp(n + 1, -1e9);
    dp[0] = 0;

    for (int i = 1; i <= m; i++)
    {
        for (int j = n; j >= 1; j--)
        {

            // Calculate the maximum dot product at 
            // position j by choosing between not 
            // including b[j-1] and including b[j-1]
            // Update dp[j] with the maximum value
            dp[j] = max(dp[j], dp[j - 1] + (a[i - 1] * b[j - 1]));
        }
    }

    // Return the maximum dot product
    return dp[n];
}
};
