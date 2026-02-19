#include <vector>

class Solution {
  public:
    std::vector<int> missinRange(std::vector<int>& arr, int low, int high) {
        std::vector<bool> present(high + 1, false);
        
        // Mark the numbers from the array that fall within our limits as true
        for (int num : arr) {
            // We only care about marking numbers up to 'high' to avoid OutOfBounds errors
            if (num <= high) {
                present[num] = true;
            }
        }
        
        std::vector<int> missing_nums;
        
        // Iterate straight from low to high. 
        // This naturally keeps our resulting array sorted.
        for (int i = low; i <= high; ++i) {
            if (!present[i]) {
                missing_nums.push_back(i);
            }
        }
        
        return missing_nums;
    }
};