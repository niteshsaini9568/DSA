class Solution {
  public:
    vector<vector<int>> transpose(vector<vector<int>>& mat) {

        int rows = mat.size();        
        int cols = mat[0].size();    
        
        // Create a result matrix of size 
        // cols x rows for the transpose
        vector<vector<int>> tMat(cols, vector<int>(rows))
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                
                // Assign transposed value
                tMat[j][i] = mat[i][j];  
            }
        }
    
        return tMat;  
    }
};