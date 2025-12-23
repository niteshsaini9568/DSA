class Solution {
  public:
    vector<int> cntInRange(vector<int> &arr, vector<vector<int>> &queries) {
        // 1. Sort the array to enable binary search
        sort(arr.begin(), arr.end());
        
        vector<int> results;
        
        // 2. Process each query
        for (const auto& query : queries) {
            int a = query[0];
            int b = query[1];
            

            auto it_low = lower_bound(arr.begin(), arr.end(), a);
            
            auto it_high = upper_bound(arr.begin(), arr.end(), b);
            
         
            results.push_back(distance(it_low, it_high));
        }
        
        return results;
    }
};