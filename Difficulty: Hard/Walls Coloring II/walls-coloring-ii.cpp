class Solution {
  public:
    int minCost(vector<vector<int>> &costs) {
        int n = costs.size();
        if (n == 0) return 0;
        
        int k = costs[0].size();
        
        // Edge case: if we have more than 1 wall but only 1 color
        if (k == 1 && n > 1) return -1;
        
        // Edge case: single wall
        if (n == 1) {
            return *min_element(costs[0].begin(), costs[0].end());
        }
        
        // Track minimum and second minimum from previous wall
        // We only need to know: min value, second min value, and which color gave min
        int prevMin = 0, prevSecondMin = 0, prevMinColor = -1;
        
        for (int i = 0; i < n; i++) {
            int currMin = INT_MAX, currSecondMin = INT_MAX, currMinColor = -1;
            
            for (int j = 0; j < k; j++) {
                int cost;
                
                if (i == 0) {
                    // First wall - just use the cost directly
                    cost = costs[i][j];
                } else {
                    // For subsequent walls:
                    // If we want to paint with color j, we cannot use color j for previous wall
                    // If j was the min color previously, use second min; otherwise use min
                    if (j == prevMinColor) {
                        cost = costs[i][j] + prevSecondMin;
                    } else {
                        cost = costs[i][j] + prevMin;
                    }
                }
                
                // Update current minimum and second minimum
                if (cost < currMin) {
                    currSecondMin = currMin;
                    currMin = cost;
                    currMinColor = j;
                } else if (cost < currSecondMin) {
                    currSecondMin = cost;
                }
            }
            
            // Move to next iteration
            prevMin = currMin;
            prevSecondMin = currSecondMin;
            prevMinColor = currMinColor;
        }
        
        return prevMin == INT_MAX ? -1 : prevMin;
    }
};