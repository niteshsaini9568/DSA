class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int gola_index = -1;

        // Find out the index of that element which follow this condition - nums[i] > nums[i-1]
        for(int i = n-1; i > 0; i--){
            if(nums[i] > nums[i-1]){
                gola_index = i-1;
                break;
            }
        }

        if(gola_index != -1){
            // Step 2 - Swap the element findout in the step 1 with next bigger element
            for(int j = n-1; j >= gola_index; j--){
                if(nums[j] > nums[gola_index]){
                    swap(nums[j], nums[gola_index]);
                    break;
                }
            }

            // Step 3 - Reverse the rest of the array after that index after gola index.
            reverse(nums.begin() + gola_index + 1, nums.end());
        }else{
            reverse(nums.begin(), nums.end());
        }
    }
};