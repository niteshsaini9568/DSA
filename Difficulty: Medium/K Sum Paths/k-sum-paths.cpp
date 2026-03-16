class Solution {
public:
    void dfs(Node* node, int k, long long currSum,
             unordered_map<long long, int>& prefixCount, int& result) {

        if (!node) return;

        currSum += node->data;

        // If currSum - k exists as a prefix, those many paths end here
        if (prefixCount.count(currSum - k))
            result += prefixCount[currSum - k];

        // currSum itself is a valid path from root
        if (currSum == k) result++;

        prefixCount[currSum]++;                        // add current prefix

        dfs(node->left,  k, currSum, prefixCount, result);
        dfs(node->right, k, currSum, prefixCount, result);

        prefixCount[currSum]--;                        // ✅ backtrack — remove before returning
    }

    int countAllPaths(Node* root, int k) {
        unordered_map<long long, int> prefixCount;
        int result = 0;
        dfs(root, k, 0, prefixCount, result);
        return result;
    }
};