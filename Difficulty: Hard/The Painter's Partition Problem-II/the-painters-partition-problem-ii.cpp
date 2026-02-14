class Solution {
  public:
    bool isPossible(vector<int>& arr, int k, long long maxTime) {
        int painters = 1;
        long long currentSum = 0;
        
        for (int length : arr) {
            if (currentSum + length <= maxTime) {
                currentSum += length;
            } else {
                painters++;
                currentSum = length;
            }
        }
        return painters <= k;
    }

    int minTime(vector<int>& arr, int k) {
        long long low = 0;
        long long high = 0;
        
        for (int x : arr) {
            high += x;
            low = max(low, (long long)x);
        }
        
        long long ans = high;
        
        while (low <= high) {
            long long mid = low + (high - low) / 2;
            
            if (isPossible(arr, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        
        return (int)ans;
    }
};