class Solution {
public:
    // Renamed from generateGray to graycode
    vector<string> graycode(int n) {
        vector<string> res;
        int totalCodes = 1 << n;
        
        for (int i = 0; i < totalCodes; i++) {
            // Binary to Gray conversion logic
            int g = i ^ (i >> 1);
            
            string s = "";
            for (int j = n - 1; j >= 0; j--) {
                if (g & (1 << j)) {
                    s += '1';
                } else {
                    s += '0';
                }
            }
            res.push_back(s);
        }
        
        return res;
    }
};