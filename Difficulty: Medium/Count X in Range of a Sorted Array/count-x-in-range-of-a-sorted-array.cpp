class Solution {
  public:
    vector<int> countXInRange(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        
        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];
            int x = q[2];
            
            auto lb = lower_bound(arr.begin() + l, arr.begin() + r + 1, x);
            auto ub = upper_bound(arr.begin() + l, arr.begin() + r + 1, x);
            
            ans.push_back(ub - lb);
        }
        
        return ans;
    }
};
