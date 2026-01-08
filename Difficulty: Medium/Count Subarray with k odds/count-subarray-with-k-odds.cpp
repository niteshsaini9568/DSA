class Solution {
public:
    int countSubarrays(vector<int>& arr, int k) {
        return countAtMost(arr, k) - countAtMost(arr, k - 1);
    }

private:
    int countAtMost(vector<int>& arr, int k) {
        if (k < 0) return 0;

        int left = 0;
        int right = 0;
        int oddCount = 0;
        int result = 0;
        int n = arr.size();

        while (right < n) {
            if (arr[right] % 2 != 0) {
                oddCount++;
            }

            while (oddCount > k) {
                if (arr[left] % 2 != 0) {
                    oddCount--;
                }
                left++;
            }

            result += (right - left + 1);
            right++;
        }
        return result;
    }
};