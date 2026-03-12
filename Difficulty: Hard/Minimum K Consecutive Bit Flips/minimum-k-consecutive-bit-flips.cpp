class Solution {
  public:
    int kBitFlips(vector<int>& arr, int k) {
        int n = arr.size();                  // Fix 1: was nums.size()
        vector<int> diff(n + 1, 0);
      
        int flipsCount = 0;
        int currentFlips = 0;
      
        for (int i = 0; i < n; ++i) {
            currentFlips += diff[i];
          
            // Fix 2: was nums[i] — now correctly uses arr[i]
            if (currentFlips % 2 == arr[i]) {
                if (i + k > n) {
                    return -1;
                }
                diff[i]++;
                diff[i + k]--;
                currentFlips++;
                flipsCount++;
            }
        }
      
        return flipsCount;
    }
};