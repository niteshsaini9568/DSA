class Solution {
  public:
    bool isBinaryPalindrome(int n) {
    string bin = "";

    // Convert to binary
    while (n > 0) {
        bin += (n % 2) + '0';
        n /= 2;
    }

    // Check palindrome
    int i = 0, j = bin.size() - 1;
    while (i < j) {
        if (bin[i] != bin[j])
            return false;
        i++;
        j--;
    }

    return true;
}

};