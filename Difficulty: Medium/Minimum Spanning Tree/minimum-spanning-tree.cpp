class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        
        unordered_map<int, vector<pair<int, int>>> adj;

        // Build undirected graph
        for(auto &edge : edges){
            int u = edge[0];
            int v = edge[1];
            int wt = edge[2];

            adj[u].push_back({v, wt});
            adj[v].push_back({u, wt});
        }

        int sum = 0;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        vector<bool> visited(V, false);

        pq.push({0,0});  // {weight, node}

        while(!pq.empty()){
            auto el = pq.top();
            pq.pop();

            int wt = el.first;
            int u = el.second;

            // Skip if already visited
            if(visited[u]) continue;

            visited[u] = true;
            sum += wt;

            for(auto &edge : adj[u]){
                int v = edge.first;
                int wt_ = edge.second;

                if(!visited[v]){
                    pq.push({wt_, v});
                }
            }
        }

        return sum;
    }
};