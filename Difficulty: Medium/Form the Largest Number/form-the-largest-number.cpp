#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
  public:
    string findLargest(vector<int> &arr) {
        // Step 1: Convert all integers to strings
        vector<string> strArr;
        for (int num : arr) {
            strArr.push_back(to_string(num));
        }
        
        // Step 2: Sort the strings using a custom comparator
        sort(strArr.begin(), strArr.end(), [](const string &a, const string &b) {
            // Compare which combination yields a larger number
            return a + b > b + a;
        });
        
        // Step 3: Handle the edge case where the array consists entirely of zeros
        if (strArr[0] == "0") {
            return "0";
        }
        
        // Step 4: Concatenate the sorted strings into the final result
        string result = "";
        for (const string &s : strArr) {
            result += s;
        }
        
        return result;
    }
};