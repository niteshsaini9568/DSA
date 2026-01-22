#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long subarrayRanges(vector<int>& arr) {
        int n = arr.size();
        long long totalSum = 0;
        
        vector<int> nextGreater(n, n), prevGreater(n, -1);
        vector<int> nextSmaller(n, n), prevSmaller(n, -1);
        stack<int> s;

        // Find Previous Greater Element
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] <= arr[i]) {
                s.pop();
            }
            if (!s.empty()) prevGreater[i] = s.top();
            s.push(i);
        }
        
        // Clear stack for Next Greater Element
        while (!s.empty()) s.pop();
        
        // Find Next Greater Element
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] < arr[i]) {
                s.pop();
            }
            if (!s.empty()) nextGreater[i] = s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        // Find Previous Smaller Element
        for (int i = 0; i < n; i++) {
            while (!s.empty() && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            if (!s.empty()) prevSmaller[i] = s.top();
            s.push(i);
        }

        while (!s.empty()) s.pop();

        // Find Next Smaller Element
        for (int i = n - 1; i >= 0; i--) {
            while (!s.empty() && arr[s.top()] > arr[i]) {
                s.pop();
            }
            if (!s.empty()) nextSmaller[i] = s.top();
            s.push(i);
        }

        // Calculate Total Contribution
        for (int i = 0; i < n; i++) {
            long long leftMax = i - prevGreater[i];
            long long rightMax = nextGreater[i] - i;
            long long leftMin = i - prevSmaller[i];
            long long rightMin = nextSmaller[i] - i;

            totalSum += (leftMax * rightMax - leftMin * rightMin) * arr[i];
        }

        return totalSum;
    }
};