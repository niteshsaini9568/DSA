class Solution {
  public:
    void genSubset(vector<int> &arr, int index, int currSum, unordered_map<int, int> &freq) {
        if (index == arr.size()) {
            
            // store frequency of currSum
            freq[currSum]++; 
            return;
        }
    
        // Include current element
        genSubset(arr, index + 1, currSum + arr[index], freq);
    
        // Skip current element
        genSubset(arr, index + 1, currSum, freq);
    }
    
    // Function to count subsets whose sum equals k using frequency maps
    int countSubset(vector<int> &arr, int k) {
        int n = arr.size();
        int mid = n / 2;
    
        // Split array into two halves
        vector<int> left(arr.begin(), arr.begin() + mid);
        vector<int> right(arr.begin() + mid, arr.end());
    
        // Store frequency of all subset sums
        unordered_map<int, int> freqLeft, freqRight;
        genSubset(left, 0, 0, freqLeft);
        genSubset(right, 0, 0, freqRight);
    
        int count = 0;
    
        // Multiply frequencies of pairs that sum to k
        for (auto &p : freqLeft) {
            int sumLeft = p.first;
            int fLeft = p.second;
            int target = k - sumLeft;
            if (freqRight.find(target) != freqRight.end()) {
                count += fLeft * freqRight[target];
            }
        }
    
        return count;
    }
};