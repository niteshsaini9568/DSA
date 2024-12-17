#include <iostream>
using namespace std;

void findLargest(int arr[], int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The largest value is = " << largest << endl;
}

int main()
{
    int arr[6];

    cout << "Give the 6 inputs for the array: ";

    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }

    findLargest(arr, 6);

    return 0;
}
