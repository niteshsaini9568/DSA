class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int l = 0, r = 0;
        vector<int> arr;

        while (l < a.size() && r < b.size()) {
            if (a[l] <= b[r]) {
                arr.push_back(a[l]);
                l++;
            } else {
                arr.push_back(b[r]);
                r++;
            }
        }

        while (l < a.size()) {
            arr.push_back(a[l]);
            l++;
        }

        while (r < b.size()) {
            arr.push_back(b[r]);
            r++;
        }

        return arr[k - 1];
    }
};
