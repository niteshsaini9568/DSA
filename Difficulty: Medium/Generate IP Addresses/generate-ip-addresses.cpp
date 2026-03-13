class Solution {
  public:
    bool isValid(const string &s)
{
    if (s.size() > 1 && s[0] == '0')
    {

        // leading zero not allowed
        return false;
    }

    int val = stoi(s);
    return val <= 255;
}

// Recursive function to generate IP addresses
void generateIpRec(const string &s, int index, string curr, int cnt, vector<string> &res)
{

    if (index >= s.size())
        return;

    // If 3 dots are placed, validate the last segment
    if (cnt == 3)
    {
        string last = s.substr(index);
        if (last.size() <= 3 && isValid(last))
            res.push_back(curr + last);
        return;
    }

    string segment = "";

    // Try segment lengths 1 to 3
    for (int i = index; i < min(index + 3, (int)s.size()); i++)
    {
        segment += s[i];

        if (isValid(segment))
        {
            generateIpRec(s, i + 1, curr + segment + ".", cnt + 1, res);
        }
    }
}

// Generate all valid IP addresses
vector<string> generateIp(string s)
{
    vector<string> res;
    generateIpRec(s, 0, "", 0, res);
    return res;
}
};