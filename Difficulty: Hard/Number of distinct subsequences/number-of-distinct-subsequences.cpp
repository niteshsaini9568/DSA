class Solution {
  public:
    int distinctSubseq(string &str) {
        int n = str.size();
        int mod = 1000000007;
    
        vector<int> last(26, 0);
        int res = 1;
    
        for(int i = 1; i <= n; i++) {
    
            int cur = ( (2LL * res) % mod - last[str[i - 1] - 'a'] + mod ) % mod;
            last[str[i - 1] - 'a'] = res;
            res = cur;
        }
        return res;
    }

};