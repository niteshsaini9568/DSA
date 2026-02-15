class Solution {
  public:
    int findMinDiff(vector<int> &arr, int m) {
    	int n = arr.size();
    
        sort(arr.begin(), arr.end());
    
        int minDiff = INT_MAX;
    
        for (int i = 0; i + m - 1 < n; i++) {
          
            int diff = arr[i + m - 1] - arr[i];
            if (diff < minDiff)
            	minDiff = diff;
        }
        return minDiff;
    }
};