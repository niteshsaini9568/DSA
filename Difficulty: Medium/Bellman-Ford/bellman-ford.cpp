// User function Template for C++

class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        // Code here
        vector<int> result(V, 1e8);
        result[src] = 0;
        
        for(int i = 0; i <= V-1; i++){
            for(auto edge : edges){
                int u = edge[0];
                int v = edge[1];
                int d = edge[2];
                
                if(result[u] != 1e8 && result[u] + d < result[v]){
                    result[v] = result[u] + d;
                }
            }
        }
        
        for(auto edge : edges){
            int u = edge[0];
            int v = edge[1];
            int d = edge[2];
                
            if(result[u] != 1e8 && result[u] + d < result[v]){
                return {-1};
            }
        }
        
        return result;
    }
};
