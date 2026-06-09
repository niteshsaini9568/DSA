#include <vector>

class Solution {
public:
    bool canSeatAllPeople(int k, std::vector<int> &seats) {
        int n = seats.size();
        
        // Step 1: Check if the initial seating arrangement is already invalid
        for (int i = 0; i < n - 1; ++i) {
            if (seats[i] == 1 && seats[i + 1] == 1) {
                return false; 
            }
        }
        
        // Step 2: Greedily place the k people
        for (int i = 0; i < n; ++i) {
            if (seats[i] == 0) {
                // Check if left and right neighbors are empty (or out of bounds)
                bool left_empty = (i == 0 || seats[i - 1] == 0);
                bool right_empty = (i == n - 1 || seats[i + 1] == 0);
                
                if (left_empty && right_empty) {
                    seats[i] = 1; // Seat the person here
                    k--;          // One less person to seat
                    
                    if (k <= 0) return true; // Optimization: stop early if everyone is seated
                }
            }
        }
        
        // If k is 0 or less, we successfully seated everyone
        return k <= 0;
    }
};