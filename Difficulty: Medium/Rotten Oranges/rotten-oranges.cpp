class Solution {
  public:
    bool isSafe(int i, int j, int n, int m){
        return (i >= 0 && i < n && j >= 0 && j < m);
    }
    
    // function to perform bfs and find minimum time
    int orangesRot(vector<vector<int>> &mat){
        int n = mat.size();
        int m = mat[0].size();

        queue<pair<int, int>> q;

        int elapsedTime = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 2)
                {
                    q.push({i, j});
                }
            }
        }
    
        vector<vector<int>> directions = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
    
        while (!q.empty()){
            int size = q.size();
            bool flag = false; 
    
            for (int i = 0; i < size; i++){
                auto [x, y] = q.front();
                q.pop();
    
                for (auto dir : directions){
                    int nx = x + dir[0];
                    int ny = y + dir[1];
    
                    if (isSafe(nx, ny, n, m) && mat[nx][ny] == 1){
                        mat[nx][ny] = 2;
                        q.push({nx, ny});
                        flag = true;
                    }
                }
            }
    
            if (flag)
                elapsedTime++;
        }
    
        // check if any fresh orange still remains
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (mat[i][j] == 1)
                    return -1;
            }
        }
    
        return elapsedTime;
    }
};