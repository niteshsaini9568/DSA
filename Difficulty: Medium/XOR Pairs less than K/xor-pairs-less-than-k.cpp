class Solution {
public:
    struct Trie {
        Trie* child[2];
        int cnt;
        Trie() {
            child[0] = child[1] = NULL;
            cnt = 0;
        }
    };

    void insertTrie(Trie* root, int num) {
        for(int i = 15; i >= 0; i--) {
            int bit = (num >> i) & 1;
            if(!root->child[bit]) 
                root->child[bit] = new Trie();
            root = root->child[bit];
            root->cnt++;
        }
    }

    int countLessThanK(Trie* root, int num, int k) {
        if(!root) return 0;
        int ans = 0;

        for(int i = 15; i >= 0; i--) {
            if(!root) break;

            int b1 = (num >> i) & 1; // bit of num
            int b2 = (k   >> i) & 1; // bit of k

            if(b2 == 1) {

                if(root->child[b1])
                    ans += root->child[b1]->cnt;

        
                root = root->child[b1 ^ 1];
            } 
            else {
               
                root = root->child[b1];
            }
        }
        return ans;
    }

    int cntPairs(vector<int>& arr, int k) {
        Trie* root = new Trie();
        int ans = 0;

        for(int x : arr) {
            ans += countLessThanK(root, x, k);
            insertTrie(root, x);
        }
        return ans;
    }
};
