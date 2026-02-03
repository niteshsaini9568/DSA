class Solution {
  public:
    int maxProfit(vector<int> &prices) {
  
        int minSoFar = prices[0], res = 0;
      
        for (int i = 1; i < prices.size(); i++) {
    
            // Update the minimum value seen so far
            minSoFar = min(minSoFar, prices[i]);
           
            // Update result if we get more profit                
            res = max(res, prices[i] - minSoFar);
        }
        return res;
    }

};
