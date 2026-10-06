class Solution {
public:
    int minAddToMakeValid(string s) {
        // Use a string as a stack to keep track of unmatched parentheses
        string stack;
      
        // Iterate through each character in the input string
        for (char c : s) {
            // If we encounter a closing parenthesis and there's a matching opening parenthesis
            // on top of the stack, we can form a valid pair and remove the opening parenthesis
            if (c == ')' && !stack.empty() && stack.back() == '(') {
                stack.pop_back();
            }
            else {
                // Otherwise, push the current parenthesis onto the stack
                // This handles both unmatched opening '(' and closing ')' parentheses
                stack.push_back(c);
            }
        }
      
        // The size of the stack represents the number of unmatched parentheses
        // which equals the minimum number of additions needed to make the string valid
        return stack.size();
    }
};
