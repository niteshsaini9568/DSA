class Solution {
  public:
    int countWays(int n, int k) {
    
    // base cases
    if (n == 1) return k;
    if (n == 2) return k*k;
    
    // Fill value for 1 and 2 fences
    int prev2 = k;
    int prev1 = k*k;
    
    for (int i = 3; i <= n; i++) {
        int curr = prev1*(k-1) + prev2*(k-1);
        
        // update the values
        prev2 = prev1;
        prev1 = curr;
    }
    
    return prev1;
}
};