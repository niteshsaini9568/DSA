class Solution {
  public:
    int equalSumSpan(vector<int> &a1, vector<int> &a2) {
        int n = a1.size();
        int maxLen = 0;
        
        // Hash map to store first occurrence of each difference
        unordered_map<int, int> diffMap;
        
        int prefixSum1 = 0, prefixSum2 = 0;
        
        for (int i = 0; i < n; i++) {
            prefixSum1 += a1[i];
            prefixSum2 += a2[i];
            
            int currentDiff = prefixSum1 - prefixSum2;
            
            // If difference is 0, entire subarray 
            // from 0 to i has equal sum
            if (currentDiff == 0) {
                maxLen = max(maxLen, i + 1);
            }
            
            // If this difference has been seen before
            else if (diffMap.find(currentDiff) != diffMap.end()) {
                maxLen = max(maxLen, i - diffMap[currentDiff]);
            } 
            else {
                
                // Store first occurrence of this difference
                diffMap[currentDiff] = i;
            }
        }
        
        return maxLen;
    }
};