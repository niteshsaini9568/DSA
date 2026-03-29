class Solution {
  public:
    int countPartitions(vector<int> &arr, int diff){
        int sum = accumulate(arr.begin(), arr.end(), 0);
    
        // validate conversion to target
        if ((sum + diff) % 2 != 0 || sum < diff)
            return 0;
    
        int target = (sum + diff) / 2;
        int n = arr.size();
    
        // dp[j] = ways to form sum j
        vector<int> dp(target + 1, 0);
        
        // one way to make sum 0
        dp[0] = 1; 
    
        for (int i = 0; i < n; i++){
            
            // update from right to avoid reuse of same element
            for (int j = target; j >= arr[i]; j--){
                dp[j] += dp[j - arr[i]];
            }
        }
    
        return dp[target];
    }
};