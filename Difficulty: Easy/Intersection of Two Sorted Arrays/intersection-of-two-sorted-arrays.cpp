class Solution {
  public:
    vector<int> intersection(vector<int>& a,  vector<int>& b) {
    vector<int> res; 
    int m = a.size();
    int n = b.size();
  
    int i = 0, j = 0;    
    while(i < m && j < n) {
      
        // Skip duplicate elements in the first array
        if(i > 0 && a[i - 1] == a[i]) {
            i++;
            continue;
        }
      
        // Skip the smaller
        if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
      
        // If equal, add to result and move both 
        else {
            res.push_back(a[i]);
            i++;
            j++;
        }
    }
    return res; 
}
};