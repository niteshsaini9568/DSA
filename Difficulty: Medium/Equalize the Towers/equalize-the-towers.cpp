class Solution {
public:
    int minCost(vector<int>& heights, vector<int>& cost) {
        int n = heights.size();
        if (n == 0) return 0;
        
        // Store height and cost pairs to sort by height
        vector<pair<int, int>> towers(n);
        long long totalWeight = 0;
        
        for (int i = 0; i < n; ++i) {
            towers[i] = {heights[i], cost[i]};
            totalWeight += cost[i];
        }
        
        // Sort based on heights
        sort(towers.begin(), towers.end());
        
        long long currentWeight = 0;
        int targetHeight = towers[0].first;
        
        // Find the weighted median
        // We look for the point where the cumulative weight passes half the total
        for (const auto& tower : towers) {
            currentWeight += tower.second;
            if (currentWeight * 2 >= totalWeight) {
                targetHeight = tower.first;
                break;
            }
        }
        
        // Calculate the total cost to convert all towers to targetHeight
        long long finalCost = 0;
        for (int i = 0; i < n; ++i) {
            finalCost += (long long)abs(heights[i] - targetHeight) * cost[i];
        }
        
        return (int)finalCost;
    }
};