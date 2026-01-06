class Solution {
  public:
    int maxSubarrayXOR(vector<int>& arr, int k) {
        int n = arr.size();
        if (n < k) return -1;

        int currentXor = 0;
        for (int i = 0; i < k; i++) {
            currentXor ^= arr[i];
        }

        int maxXor = currentXor;

        for (int i = k; i < n; i++) {
            currentXor ^= arr[i];     
            currentXor ^= arr[i - k];
            maxXor = max(maxXor, currentXor);
        }

        return maxXor;
    }
};
