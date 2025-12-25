class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
    
        int low = 0, high = m - 1;
        
        int mini = int(-1e9);
    
        // binary search on columns
        while (low <= high) {
            int mid = (low + high) / 2;
    
            // find the row with the maximum element in 
            // the current column
            int maxRow = 0;
            for (int i = 1; i < n; ++i) {
                if (mat[i][mid] > mat[maxRow][mid])
                    maxRow = i;
            }
    

            int left = (mid > 0) ? 
                            mat[maxRow][mid - 1] : mini;
            int right = (mid + 1 < m) ? 
                            mat[maxRow][mid + 1] : mini;
    
            if (mat[maxRow][mid] >= left && 
                        mat[maxRow][mid] >= right)
                return {maxRow, mid};
    
            else if (right > mat[maxRow][mid])
                low = mid + 1;

            else
                high = mid - 1;
        }
    
        return {-1, -1};
    }

};
