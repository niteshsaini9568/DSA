/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    void helper(Node* root, queue<pair<Node*, int>>& qu, map<int, int>& mp) {
        qu.push({root, 0});
        
        while(!qu.empty()) {
            auto currPair = qu.front();
            qu.pop();
            
            Node* curr = currPair.first;
            int hd = currPair.second;
            
            if(mp.find(hd) == mp.end()) {
                mp[hd] = curr->data; 
            }
            
            if(curr->left != nullptr) {
                qu.push({curr->left, hd - 1});
            }
            if(curr->right != nullptr) {
                qu.push({curr->right, hd + 1});
            }
        }
    }
    
    vector<int> topView(Node *root) {
        if(root == nullptr) return {};
        
        queue<pair<Node*, int>> qu;
        map<int, int> mp;
        vector<int> ans;
        
        helper(root, qu, mp);
        
        for(auto &it : mp) {
            ans.push_back(it.second);
        }
        return ans;
    }
};

































