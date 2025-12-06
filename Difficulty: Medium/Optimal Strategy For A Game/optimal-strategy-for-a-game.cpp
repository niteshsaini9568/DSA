class Solution {
  public:


int maximumAmount(vector<int> arr) {

    int n = arr.size();
    int sum = 0;
    vector<int> dp(n, 0);

    for (int i = (n - 1); i >= 0; i--) {
        
        // Calculating the sum of all the elements
        sum += arr[i];

        for (int j = i; j < n; j++) {
            if (i == j) {
                
                // If there is only one element
                dp[j] = arr[j];
            } else {
                // Calculating the dp states using the relation
                dp[j] = max(arr[i] - dp[j], arr[j] - dp[j - 1]);
            }
        }
    }

    // Return the final result
    return (sum + dp[n - 1]) / 2;
}

};