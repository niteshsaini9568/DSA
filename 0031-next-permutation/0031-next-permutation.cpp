class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gola_index = -1;

        // Step 1: Find the pivot from right to left
        for (int i = n - 1; i > 0; i--) {
            if (nums[i] > nums[i - 1]) {
                gola_index = i - 1;
                break;
            }
        }

        // If no pivot exists, reverse the entire array
        if (gola_index == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 2: Find the next bigger element and swap
        for (int j = n - 1; j > gola_index; j--) {
            if (nums[j] > nums[gola_index]) {
                swap(nums[j], nums[gola_index]);
                break;
            }
        }

        // Step 3: Reverse the suffix after the pivot
        reverse(nums.begin() + gola_index + 1, nums.end());
    }
};