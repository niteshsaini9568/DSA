// User function template for C++
class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        pair<int, int> ans = {0,0};
        int rows = arr.size();
        int cols = arr[0].size();
        
        for(int row = 0; row < rows; row++){
            int curr = 0;
            for(int col = 0; col < cols; col++){
                if(arr[row][col] == 1) curr++;
            }
            
            if(curr > ans.first){
                ans = {curr, row};
            }
        }
        
        return ans.first == 0 ? -1 : ans.second;
    }
};