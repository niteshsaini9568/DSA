class Solution {
public:
    int scoreOfParentheses(string s) {
        int totalScore = 0; 
        int depth = 0;       // Current nesting depth (number of open parentheses)
      
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                
                ++depth;
            } else {  // s[i] == ')'
                // Closing parenthesis decreases the depth
                --depth;
              
                // Check if this closing parenthesis forms "()" pattern
                // If previous character was '(', we have a base case "()" 
                // which contributes 2^depth to the total score
                if (s[i - 1] == '(') {
                    totalScore += (1 << depth);  // Add 2^depth to score
                }
                // Note: If previous was ')', this is just closing an outer group
                // and doesn't contribute additional score
            }
        }
      
        return totalScore;
    }
};
