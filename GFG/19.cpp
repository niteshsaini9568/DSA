#include <bits/stdc++.h>
using namespace std;

void power_set(int i, string S, string P, vector<string> &ans, int n) {
    if (i == n) { 
        ans.push_back(P); 
        return;
    }
    
    power_set(i + 1, S, P, ans, n);
    power_set(i + 1, S, P + S[i], ans, n);
}

int main() {
    string S = "abc";
    string P = "";
    vector<string> ans;
    
    power_set(0, S, P, ans, S.size());
    
    for (auto &i : ans) {
        cout << i << endl;
    }
    
    return 0;
}
