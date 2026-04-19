class Solution {
public:
    bool isPower(int x, int y) {
        // Base case: Any number to the power of 0 is 1
        if (y == 1) return true;
        
        // If x is 1 and y is not 1, y can never be a power of x
        if (x == 1) return false;

        // Use long long to prevent overflow during multiplication
        long long pow = 1;
        while (pow < y) {
            pow *= x;
        }

        // If we hit y exactly, return true
        return (pow == y);
    }
};