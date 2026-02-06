class Solution {
  public:
    vector<int> smallestDiff(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        sort(arr3.begin(), arr3.end());

        int n = arr1.size();
        int i = 0, j = 0, k = 0;
        int minDiff = INT_MAX;
        vector<int> res;

        while (i < n && j < n && k < n) {
            int val1 = arr1[i];
            int val2 = arr2[j];
            int val3 = arr3[k];

            int currentMax = max({val1, val2, val3});
            int currentMin = min({val1, val2, val3});
            int currentDiff = currentMax - currentMin;

            if (res.empty() || currentDiff < minDiff) {
                minDiff = currentDiff;
                res = {val1, val2, val3};
            } else if (currentDiff == minDiff) {
                long long currentSum = (long long)val1 + val2 + val3;
                long long bestSum = (long long)res[0] + res[1] + res[2];
                if (currentSum < bestSum) {
                    res = {val1, val2, val3};
                }
            }

            if (currentDiff == 0) break;

            if (val1 == currentMin) i++;
            else if (val2 == currentMin) j++;
            else k++;
        }

        sort(res.begin(), res.end(), greater<int>());
        return res;
    }
};