class Solution {
public:
    int reverseDegree(string s) {
        int n = s.size();
        int ans = 0;

        for(int i = 1; i <= n; i++){
            int reverse_s = 'z' - s[i-1] + 1;
            ans += reverse_s * i;
        }

        return ans;
    }
};