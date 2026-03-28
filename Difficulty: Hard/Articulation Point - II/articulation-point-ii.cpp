class Solution {
    int timer = 1;
    
    void dfs(int node, int parent, vector<int> adj[], vector<int>& vis, vector<int>& tin, vector<int>& low, vector<int>& mark) {
        vis[node] = 1;
        tin[node] = low[node] = timer++;
        int child = 0;
        
        for (auto it : adj[node]) {
            if (it == parent) continue;
            
            if (!vis[it]) {
                dfs(it, node, adj, vis, tin, low, mark);
                low[node] = min(low[node], low[it]);
                
                if (low[it] >= tin[node] && parent != -1) {
                    mark[node] = 1;
                }
                child++;
            } else {
                low[node] = min(low[node], tin[it]);
            }
        }
        
        if (child > 1 && parent == -1) {
            mark[node] = 1;
        }
    }

public:
    vector<int> articulationPoints(int V, vector<vector<int>>& edges) {
        timer = 1;
        vector<int> adj[V];
        
        for (auto it : edges) {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> vis(V, 0), tin(V, 0), low(V, 0), mark(V, 0);
        
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfs(i, -1, adj, vis, tin, low, mark);
            }
        }
        
        vector<int> ans;
        for (int i = 0; i < V; i++) {
            if (mark[i] == 1) {
                ans.push_back(i);
            }
        }
        
        if (ans.size() == 0) return {-1};
        return ans;
    }
};