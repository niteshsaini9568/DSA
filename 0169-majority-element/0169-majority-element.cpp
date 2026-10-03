class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj = NULL;
        int count = 0;
        
        for(int i = 0; i < n; i++){
            if(count == 0){
                count = 1;
                maj = nums[i];
            }else if(maj == nums[i])
                count++;
            else
                count--;
        }

        return maj;
    }
};