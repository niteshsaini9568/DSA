class Solution {
  public:
    int minCandy(vector<int> &arr) {
    int n = arr.size();

    // create variable to store count
    // of candies, initlize it with n
    int total = n;
    int i = 1;

    // Traverse from left to right
    while (i < n) {

        // if rating of ith children is
        // equal to the previous children
        if (arr[i] == arr[i - 1]) {
            i++;
            continue;
        }

        // to find the increasing sequence
        int peak = 0;
        while (i < n && arr[i] > arr[i - 1]) {
            peak++;
            total += peak;
            i++;
        }

        if (i == n) {
            return total;
        }

        // to find the decreasing sequence
        int valley = 0;
        while (i < n && arr[i] < arr[i - 1]) {
            valley++;
            total += valley;
            i++;
        }

        // remove the extra candy added twice
        total -= min(peak, valley);
    }

    return total;
}

};
