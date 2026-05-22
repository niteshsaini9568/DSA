class Solution {
  public:
    int cntOnes(vector<vector<int>> &grid){
        int n = grid.size();
    
        if (n == 0)
            return 0;
    
        int m = grid[0].size();
    
        queue<pair<int, int>> q;
        
        // Direction vectors for moving: down, right, up, left
        int rowDir[4] = {1, 0, -1, 0};
        int colDir[4] = {0, 1, 0, -1};
    
        // Check the first and last columns
        for (int i = 0; i < n; i++)
        {
            if (grid[i][0] == 1)
            {
                grid[i][0] = 0;
                q.push({i, 0});
            }
    
            if (grid[i][m - 1] == 1)
            {
                grid[i][m - 1] = 0;
                q.push({i, m - 1});
            }
        }
    
        // Check the first and last rows
        for (int j = 0; j < m; j++)
        {
            if (grid[0][j] == 1)
            {
                grid[0][j] = 0;
                q.push({0, j});
            }
    
            if (grid[n - 1][j] == 1)
            {
                grid[n - 1][j] = 0;
                q.push({n - 1, j});
            }
        }
    
        // Perform BFS to remove all boundary-connected 1's
        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
    
            int r = curr.first;
            int c = curr.second;
    
            // Traverse all 4 directions
            for (int k = 0; k < 4; k++)
            {
                int nr = r + rowDir[k];
                int nc = c + colDir[k];
    
                // If the adjacent cell is valid and is a 1
                if (nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] == 1)
                {
                    grid[nr][nc] = 0;
                    q.push({nr, nc});
                }
            }
        }
    
        // Count the remaining 1's
        int count = 0;
    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                count += grid[i][j];
            }
        }
    
        return count;
    }
};