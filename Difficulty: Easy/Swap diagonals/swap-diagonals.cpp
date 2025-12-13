class Solution {
  public:
    void swapDiagonal(vector<vector<int>>& mat) {

        int n = mat.size();
        for (int i = 0; i < n; i++) {
         
            // swap major and minor diagonal elements.
            swap(mat[i][i], mat[i][n - i - 1]);
        }
    }
};
