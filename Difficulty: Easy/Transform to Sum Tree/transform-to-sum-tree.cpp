class Solution {
  public:
    // Returns the original sum of the subtree rooted at node
    int helper(Node* root) {
        // Base case: null node contributes 0
        if (!root) return 0;
        
        // Leaf node: store 0, return original value to parent
        if (!root->left && !root->right) {
            int original = root->data;
            root->data = 0;
            return original;
        }
        
        // Get original sums from left and right subtrees
        int leftSum  = helper(root->left);
        int rightSum = helper(root->right);
        
        // Save original value before overwriting
        int original = root->data;
        
        // Update current node: sum of all values in left + right subtrees
        root->data = leftSum + rightSum;
        
        // Return original sum of THIS subtree (for parent's calculation)
        return original + leftSum + rightSum;
    }
    
    void toSumTree(Node* root) {
        helper(root);
    }
};