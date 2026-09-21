class Solution {
public:
    int n;
    vector<vector<int>> dp;

    static bool isincreasing(const string& a, const string& b){
        return a.size() < b.size();
    }

    bool isPredecessor(const string& prev, const string& curr){
        int N = prev.size();
        int M = curr.size();

        if(M - N != 1) return false;

        int i = 0, j = 0;
        while(i < N && j < M){
            if(prev[i] == curr[j]) i++;
            j++;
        }
        return i == N;
    }

    int solve(vector<string>& words, int curr_idx, int prev_idx){
        if(curr_idx >= n) return 0;
        if(dp[curr_idx][prev_idx + 1] != -1) return dp[curr_idx][prev_idx + 1];

        int skip = solve(words, curr_idx + 1, prev_idx);
        int take = 0;

        if(prev_idx == -1 || isPredecessor(words[prev_idx], words[curr_idx])){
            take = 1 + solve(words, curr_idx + 1, curr_idx);
        }

        return dp[curr_idx][prev_idx + 1] = max(skip, take);
    }

    int longestStrChain(vector<string>& words) {
        n = words.size();
        sort(words.begin(), words.end(), isincreasing);
        dp.assign(n, vector<int>(n + 1, -1));
        return solve(words, 0, -1);
    }
};