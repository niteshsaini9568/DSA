#include <iostream>
using namespace std;

bool sorted(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
                return true;
        }
    }
    return false; 
}

int main()
{
    int arr[] = {10, 5, 20, 15, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 35;
    cout << sorted(arr, n, target);
    return 0;
}
