class Solution {
public:
    static bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first == b.first)
            return a.second > b.second;
        return a.first < b.first;
    }

    int minMen(vector<int>& arr) {
        int n = arr.size();
        vector<pair<int, int>> range;

        for (int i = 0; i < n; i++) {
            if (arr[i] != -1) {
                int left = max(0, i - arr[i]);
                int right = min(n - 1, i + arr[i]);
                range.push_back({left, right});
            }
        }

        if (range.empty()) return -1;

        sort(range.begin(), range.end(), cmp);

        int men = 0;
        int i = 0;
        int maxi = -1;

        while (maxi < n - 1) {
            if (i >= range.size()) return -1;

            int best = maxi;
            while (i < range.size() && range[i].first <= maxi + 1) {
                best = max(best, range[i].second);
                i++;
            }

            if (best <= maxi) return -1;

            maxi = best;
            men++;
        }

        return men;
    }
};