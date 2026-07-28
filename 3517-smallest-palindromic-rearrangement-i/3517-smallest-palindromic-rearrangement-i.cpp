class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.size();
        int freq[26] = {0};
        for (char c : s) freq[c - 'a']++;

        string half = "";
        char mid = 0;
        int oddCount = 0;
        for (int c = 0; c < 26; c++) {
            half += string(freq[c] / 2, 'a' + c);
            if (freq[c] % 2) {
                oddCount++;
                mid = 'a' + c;
            }
        }
       

        string result = half;
        if (n % 2 == 1) result += mid;
        string rev = half;
        reverse(rev.begin(), rev.end());
        result += rev;
        return result;
    }
};