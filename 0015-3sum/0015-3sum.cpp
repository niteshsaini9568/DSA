
class Solution {
public:
    vector<vector<int>> result;

    void twoSum(vector<int>& nums, int target, int i, int j, int first) {
        while (i < j) {
            int sum = nums[i] + nums[j];

            if (sum > target) {
                j--;
            } 
            else if (sum < target) {
                i++;
            } 
            else {
                result.push_back({nums[first], nums[i], nums[j]});

                // Skip duplicate elements
                while (i < j && nums[i] == nums[i + 1]) i++;
                while (i < j && nums[j] == nums[j - 1]) j--;

                // Move both pointers
                i++;
                j--;
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        result.clear();
        int n = nums.size();

        sort(nums.begin(), nums.end());

        for (int k = 0; k < n - 2; k++) {
            // Skip duplicate first elements
            if (k > 0 && nums[k] == nums[k - 1]) {
                continue;
            }

            int target = -nums[k];
            twoSum(nums, target, k + 1, n - 1, k);
        }

        return result;
    }
};
