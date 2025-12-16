class Solution {
public:
    bool areRotations(string &s1, string &s2) {
        if (s1.length() != s2.length()) return false;
        string text = s1 + s1;
        return kmp(text, s2);
    }

private:
    bool kmp(string &text, string &pat) {
        int n = text.size(), m = pat.size();
        vector<int> lps(m, 0);

        // Build LPS array
        for (int i = 1, len = 0; i < m; ) {
            if (pat[i] == pat[len]) {
                lps[i++] = ++len;
            } else if (len > 0) {
                len = lps[len - 1];
            } else {
                lps[i++] = 0;
            }
        }

        // KMP search
        for (int i = 0, j = 0; i < n; ) {
            if (text[i] == pat[j]) {
                i++; j++;
                if (j == m) return true;
            } else if (j > 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
        return false;
    }
};
