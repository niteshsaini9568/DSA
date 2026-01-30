class Solution {
  public:
    void rearrangeQueue(queue<int>& q) {
        int n = q.size();
        vector<int> arr(n);
    
        // Copy elements from queue to array
        for (int i = 0; i < n; i++) {
            arr[i] = q.front();
            q.pop();
        }
    
        // Interleave elements back into the queue
        for (int i = 0; i < n / 2; i++) {
            q.push(arr[i]);           
            q.push(arr[i + n / 2]);   
        }
    }
};