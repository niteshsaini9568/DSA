#include <bits/stdc++.h>
using namespace std;

vector<int> removeDuplicates(int arr[], int size)
{
    // Add size value to each array member
    for (int i = 0; i < size; i++){
        int val = arr[i] % size;
        arr[val] += size;
    }

    // Check if any element is added twice (by dividing by size)
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / size;
        if (arr[i] > 1)
        {
            ans.push_back(i);
        }
    }

    if (ans.empty()){
        ans.push_back(-1);
    }

    return ans;
}

int main()
{
    int nums[5] = {1, 1, 2, 2, 3};
    int size = 5;

    vector<int> duplicates = removeDuplicates(nums, size);

    cout << "Duplicates: ";
    for (int val : duplicates){
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
