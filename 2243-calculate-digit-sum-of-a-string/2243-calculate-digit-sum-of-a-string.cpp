class Solution {
public:
    string digitSum(string s, int k) {
        // Keep processing until the string length is at most k
        while (s.size() > k) {
            string nextString;
            int stringLength = s.size();
          
            // Process the string in groups of k characters
            for (int startIndex = 0; startIndex < stringLength; startIndex += k) {
                int groupSum = 0;
              
                // Calculate the sum of digits in the current group
                // The group ends at either startIndex + k or the end of string, whichever comes first
                for (int currentIndex = startIndex; currentIndex < min(startIndex + k, stringLength); ++currentIndex) {
                    // Convert character digit to integer and add to sum
                    groupSum += s[currentIndex] - '0';
                }
              
                // Append the sum of this group as a string to the result
                nextString += to_string(groupSum);
            }
          
            // Update s with the new string for the next iteration
            s = nextString;
        }
      
        return s;
    }
};
