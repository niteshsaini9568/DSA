#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = height.size();
    if (n == 0) return 0;

    vector<int> preMax(n);
    vector<int> sufMax(n);
    int store = 0;

    preMax[0] = height[0];
    for (int i = 1; i < n; i++) {
        preMax[i] = max(preMax[i - 1], height[i]);
    }

    sufMax[n - 1] = height[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        sufMax[i] = max(sufMax[i + 1], height[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << "Premax[" << i << "] = " << preMax[i] << ", ";
        cout << "Sufmax[" << i << "] = " << sufMax[i] << endl;
    }

    for (int i = 0; i < n; i++) {
        store += min(preMax[i], sufMax[i]) - height[i];
    }

    cout << "Maximum Stored Water = " << store << endl;

    return 0;
}
