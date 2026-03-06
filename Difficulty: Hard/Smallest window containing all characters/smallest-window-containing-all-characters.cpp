class Solution {
public:
    string minWindow(string s, string p) {
        int m = s.length();
        int n = p.length();

        // If s is smaller than p, it's impossible to find a valid window
        if (m < n) return "";

        int count[256] = {0};
        
        // Count the frequency of each character in p
        for (char c : p) {
            count[c]++;
        }

        int start = 0, end = 0;
        int minStart = -1, minLen = INT_MAX;
        int required = n; // Total characters from p we still need to match

        while (end < m) {
            // Expand the window by including s[end]
            if (count[s[end]] > 0) {
                required--;
            }
            count[s[end]]--;
            end++;

            // Shrink the window from the left as long as all characters are matched
            while (required == 0) {
                // Update the minimum window if the current one is smaller
                if (end - start < minLen) {
                    minLen = end - start;
                    minStart = start;
                }

                // Remove s[start] from the window
                count[s[start]]++;
                if (count[s[start]] > 0) {
                    required++; // We removed a necessary character, window becomes invalid
                }
                start++;
            }
        }

        // Return the empty string if no valid window was found
        return minStart == -1 ? "" : s.substr(minStart, minLen);
    }
};