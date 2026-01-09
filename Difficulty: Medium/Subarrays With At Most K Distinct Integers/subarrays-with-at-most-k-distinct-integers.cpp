class Solution {
  public:
    int countAtMostK(vector<int> &arr, int k) {
        // Use a map to keep track of the frequency of numbers in the current window
        unordered_map<int, int> freqMap;
        int left = 0;
        int right = 0;
        int count = 0;
        int n = arr.size();

        // Iterate through the array with the right pointer
        while (right < n) {
            // Add the current element to the frequency map
            freqMap[arr[right]]++;

            // If the number of distinct elements exceeds k, shrink the window from the left
            while (freqMap.size() > k) {
                freqMap[arr[left]]--;
                // If frequency becomes 0, remove the element from the map entirely
                // to decrease the distinct count
                if (freqMap[arr[left]] == 0) {
                    freqMap.erase(arr[left]);
                }
                left++;
            }

            // The number of valid subarrays ending at 'right' is the size of the window
            count += (right - left + 1);
            
            // Move to the next element
            right++;
        }

        return count;
    }
};