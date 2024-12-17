// Finding the pivot element in the array.
// Pivot element-If the sum of right hand side of the element is equal to the sum of the left hand side of that element then that element is called the pivot element.

# include <iostream>
using namespace std;

int pivot(int* arr, int size){
    int Sum=0;

    for(int i=0; i<size; i++ ){
        Sum = Sum + arr[i];
    }
    int Left_Sum = 0;
    int Right_Sum = Sum;

    for (int i=0; i<size; i++){
        Right_Sum = Right_Sum - arr[i];
        if(Left_Sum == Right_Sum){
            return i;
        }
        Left_Sum = Left_Sum + arr[i];
    }
}

int main(){
    int arr[6] = {1,7,3,6,5,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << "The index of the pivot element is = " << pivot(arr,size);
    return 0;
}