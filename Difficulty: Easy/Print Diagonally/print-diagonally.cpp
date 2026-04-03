
class Solution {public:
    vector<int> diagView(vector<vector<int>> mat) {
        int n = mat.size();
        vector<int> result;
        
        if (n == 0) return result;
        
        // Part 1: Traverse starting from the first row
        for (int j = 0; j < n; j++) {
            int row = 0;
            int col = j;
            // Move diagonally down-left
            while (row < n && col >= 0) {
                result.push_back(mat[row][col]);
                row++;
                col--;
            }
        }
        
        // Part 2: Traverse starting from the last column (excluding the first row)
        for (int i = 1; i < n; i++) {
            int row = i;
            int col = n - 1;
            // Move diagonally down-left
            while (row < n && col >= 0) {
                result.push_back(mat[row][col]);
                row++;
                col--;
            }
        }
        
        return result;
    }
};