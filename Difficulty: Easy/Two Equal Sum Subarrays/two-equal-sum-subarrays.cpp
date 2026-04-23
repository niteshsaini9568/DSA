class Solution {
  public:
   bool canSplit(vector<int> &arr)
{
    // total sum
    int total = 0;
    for (int i = 0; i < arr.size(); i++)
        total += arr[i];

    int leftSum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        leftSum += arr[i];

        // right sum
        int rightSum = total - leftSum;

        // Check the condition
        if (leftSum == rightSum)
            return true;
    }

    return false;
}
};
