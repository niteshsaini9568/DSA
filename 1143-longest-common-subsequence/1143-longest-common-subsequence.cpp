class Solution {
public:
    int longestCommonSubsequence(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();

        vector<vector<int>> t(n+1, vector<int>(m+1));

        for(int i = 0; i < n; i++){
            t[i][0] = 0;
        }

        for(int i = 0; i < m; i++){
            t[0][i] = 0;
        }

        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(s1[i-1] == s2[j-1]){
                    t[i][j] = 1 + t[i-1][j-1];
                }else{
                    t[i][j] = max(t[i][j-1], t[i-1][j]);
                }
            }
        }

        int i = n, j = m;
        string lcs = "";

        while(i > 0 && j > 0){
            if(s1[i-1] == s2[j-1]){
                lcs.push_back(s1[i-1]);
                i--;
                j--;
            }else if(t[i][j-1] > t[i-1][j]){
                j--;
            }else{
                i--;
            }
        }

        reverse(begin(lcs), end(lcs));
        cout << lcs << endl;
        return t[n][m];
    }
};