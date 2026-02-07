class Solution {
  public:
    int maxSum(vector<int> &arr) {
        long long n = arr.size();
        if (n == 0) return 0;
        long long sum = 0;
        long long currSum = 0;
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
            currSum += (long long)i * arr[i];
        }
        
        long long maxVal = currSum;
        
        for (int i = 0; i < n; i++) {
            currSum = currSum - sum + n * (long long)arr[i];
            if (currSum > maxVal) {
                maxVal = currSum;
            }
        }
        
        return (int)maxVal;
    }
};