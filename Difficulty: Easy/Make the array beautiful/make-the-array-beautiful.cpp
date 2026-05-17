class Solution {
  public:
    vector<int> makeBeautiful(vector<int>& arr) {
    
        // This vector acts as our stack
        vector<int> st; 
        
        for (int i = 0; i < arr.size(); i++) {
            
            if (st.empty()) {
                st.push_back(arr[i]);
            } else {
                
                // Check if the top of the stack and the current element have opposite signs.
                // Note: 0 is treated as a positive number (>= 0).
                bool top_is_positive = st.back() >= 0;
                bool curr_is_positive = arr[i] >= 0;
                
                if (top_is_positive != curr_is_positive) {
                    
                    // Opposite signs found: destroy the top element
                    st.pop_back();
                } else {
                    
                    // Same signs: push the current element onto the stack
                    st.push_back(arr[i]);
                }
            }
        }
        
        return st;
    }
};