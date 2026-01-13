class Solution {
  public:
    bool canServe(vector<int>& arr) {
    
    // counts of 5 and 10 notes
    int five = 0, ten = 0; 

    for (int i = 0; i < arr.size(); ++i) {
        
        // no change needed
        if (arr[i] == 5) {
            five++; 
        } 
        else if (arr[i] == 10) {
            
            // need one 5
            if (five == 0) return false; 
            five--; ten++;
        } 
        else {
            
            // b == 20
            // prefer 10+5 to save 5 notes
            if (ten > 0 && five > 0) {
                ten--; five--;
            } 
            else if (five >= 3) {
                five -= 3;
            } 
            else return false;
        }
    }
    return true;
}
};