class Solution {
  public:
    int overlapInt(vector<vector<int>> &arr) {
    
        // coordinate → change in active count
        map<int, int> mp; 
    
        // mark +1 at start, -1 at end+1
        for (auto &interval : arr) {
            // start
            mp[interval[0]]++;      
            // just after end
            mp[interval[1] + 1]--;  
        }
    
        int ans = 0, count = 0;
        // rraverse in sorted coordinate order
        for (auto &p : mp) {
            count += p.second;
            ans = max(ans, count);
        }
    
        return ans;
    }
};
