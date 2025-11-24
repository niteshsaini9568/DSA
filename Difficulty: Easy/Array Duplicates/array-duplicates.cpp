class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        unordered_map<int, int> um;
        
        for(int i = 0; i < arr.size(); i++){
            um[arr[i]]++;
        }
        
        vector<int> ans;
        for(auto it : um){
            if(it.second > 1) ans.push_back(it.first);
        }
        
        return ans;
    }
};