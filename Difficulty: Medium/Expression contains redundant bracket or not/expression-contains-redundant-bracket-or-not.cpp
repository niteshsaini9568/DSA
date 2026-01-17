#include <iostream>
#include <string>
#include <stack>

using namespace std;

class Solution {
  public:
    bool checkRedundancy(string &s) {
        stack<char> st;
        
        for (char ch : s) {
            // If current char is a closing bracket, we check for redundancy
            if (ch == ')') {
                bool hasOperator = false;
                
                // Pop elements until we find the matching opening bracket '('
                while (!st.empty() && st.top() != '(') {
                    char top = st.top();
                    
                    // If we find an operator, this pair of brackets is useful
                    if (top == '+' || top == '-' || top == '*' || top == '/') {
                        hasOperator = true;
                    }
                    st.pop();
                }
                
                // Pop the matching '('
                if (!st.empty()) {
                    st.pop();
                }
                
                // If no operator was found between the brackets, it is redundant
                if (!hasOperator) {
                    return true;
                }
            } else {
                // Push open brackets, operators, and operands to stack
                st.push(ch);
            }
        }
        
        return false;
    }
};