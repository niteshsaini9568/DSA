class Solution {
  public:
    int find(int i, vector<int>& parent) {
        if (i == parent[i]) return i;
        return parent[i] = find(parent[i], parent);
    }
    
    void Union(int a, int b, vector<int>& rank, vector<int>& parent) {
        int a_parent = find(a, parent);
        int b_parent = find(b, parent);
        
        if (a_parent != b_parent) {
            if (rank[a_parent] > rank[b_parent]) {
                parent[b_parent] = a_parent;
            } 
            else if (rank[b_parent] > rank[a_parent]) {
                parent[a_parent] = b_parent;
            } 
            else {
                parent[b_parent] = a_parent;
                rank[a_parent]++;
            }
        }
    }
    
    int detectCycle(int V, vector<int> adj[]) {
        vector<int> parent(V);
        vector<int> rank(V, 0);
        
        for (int i = 0; i < V; i++) {
            parent[i] = i;
        }
        
        for (int u = 0; u < V; u++) {
            for (int v : adj[u]) {
                if (u < v) {  // avoid double edge in undirected graph
                    int u_parent = find(u, parent);
                    int v_parent = find(v, parent);
                    
                    if (u_parent == v_parent) {
                        return 1;  // cycle detected
                    }
                    
                    Union(u, v, rank, parent);
                }
            }
        }
        
        return 0;  // no cycle
    }
};
