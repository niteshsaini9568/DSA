#include <iostream>
using namespace std;

int removeDuplicates(int nums[] , int size){
    int k = 1; // This will track the number of unique elements found
    // Start from the second element and compare with the previous one
    for (int i = 1; i < size; ++i)
    {
        if (nums[i] != nums[i - 1]){ // If current element is not a duplicate
            nums[k] = nums[i]; // Place it at the next position in the unique subarray
            k++;               // Increment the count of unique elements
        }
    }

    return k; // 'k'
}


int main(){

    int nums[5] = {1,1,2,2,3};
    int size = 5;

    cout << removeDuplicates(nums, size) << endl;

    for(int i = 0; i < 5; i++){
        cout << nums[i] << " ";
    }

    return 0;
}