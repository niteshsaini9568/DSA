class Solution {
  public:
    int minTime(vector<int>& ranks, int n) {
        // Initialize binary search range
        long long low = 0;
        // Worst case: Max rank chef makes all 'n' donuts alone
        // To avoid overflow, we ensure high is calculated with long long
        long long high = (long long)*max_element(ranks.begin(), ranks.end()) * n * (n + 1) / 2;
        long long ans = high;

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long count = 0;

            for (int r : ranks) {
                // Correct Quadratic Formula: (-1 + sqrt(1 + 8*time/rank)) / 2
                // We use 8.0 to ensure floating point calculation inside sqrt
                long long k = (-1 + sqrt(1 + (8.0 * mid) / r)) / 2;
                count += k;
                
                // Optimization: stop if we already have enough
                if (count >= n) break;
            }

            if (count >= n) {
                ans = mid;      // Possible answer, try smaller
                high = mid - 1;
            } else {
                low = mid + 1;  // Not enough time, need more
            }
        }
        return (int)ans;
    }
};