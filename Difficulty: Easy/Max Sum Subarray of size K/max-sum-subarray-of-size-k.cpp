class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        
        if (n < k) return -1; 

        int currentSum = 0;
        for(int i = 0; i < k; i++){
            currentSum += arr[i];
        }
        
        int maxSum = currentSum;
        
        for(int i = k; i < n; i++){
            currentSum = currentSum + arr[i] - arr[i-k];
            maxSum = max(maxSum, currentSum);
        }
        
        return maxSum;
    }
};