class Solution {
  public:
    int maxProduct(vector<int> &arr) {
      	int n = arr.size();
        int maxProd = INT_MIN;
        int leftToRight = 1;
        int rightToLeft = 1;
      
        for (int i = 0; i < n; i++) {
            if (leftToRight == 0)
                leftToRight = 1;
            if (rightToLeft == 0)
                rightToLeft = 1;

            leftToRight *= arr[i];
            int j = n - i - 1;
            rightToLeft *= arr[j];
            maxProd = max({leftToRight, rightToLeft, maxProd});
        }
        return maxProd;
    }
};