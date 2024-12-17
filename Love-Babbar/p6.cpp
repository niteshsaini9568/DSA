#include <iostream>
using namespace std;

void shiftedarr(int arr[], int size, int shift)
{
    shift = shift % size;
    int temp[shift];
    for (int i = 0; i < shift; i++){
        temp[i] = arr[i];
    }
    int index = 0;
    for (int i = shift; i < size; i++){
        arr[index] = arr[i];
        index++;
    }
    for (int i = 0; i < shift; i++){
        arr[index] = temp[i];
        index++;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    int shift = 4;
    for (int i = 0; i < size; i++){
        cout << arr[i] << " ";}
    shiftedarr(arr, size, shift);
    cout << endl;
    for (int i = 0; i < size; i++)
    cout << arr[i] << " ";

    return 0;
}
