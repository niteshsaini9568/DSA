class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int maj1 = 0, maj2 = 0;
        int count1 = 0, count2 = 0;

        for(int i = 0; i < n; i++){
            if(count1 > 0 && maj1 == nums[i]) count1++;
            else if(count2 > 0 && maj2 == nums[i]) count2++;
            else if(count1 == 0){
                count1 = 1;
                maj1 = nums[i];
            }else if(count2 == 0){
                count2 = 1;
                maj2 = nums[i];
            }else{
                count1--; count2--;
            }
        }

        //ste2 : Verification steps

        vector<int> ans;
        count1 = 0;
        count2 = 0;

        for(int num : nums) {
            if(num == maj1)
                count1++;
            else if(num == maj2)
                count2++;
        }

        if(count1 > n/3) ans.push_back(maj1);
        if(count2 > n/3) ans.push_back(maj2);

        return ans;
    }
};