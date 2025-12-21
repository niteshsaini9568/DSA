class Solution {
  public:
    int missingNum(vector<int>& arr) {
        long long sum = 0;
        
        for (int x : arr) {
            sum += x;
        }
        
        long long n = arr.size() + 1;
        long long expected = n * (n + 1) / 2;
        
        return (int)(expected - sum);
    }
};
