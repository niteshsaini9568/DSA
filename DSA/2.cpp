# include <iostream>
using namespace std;

void max(int arr[], int size){
    int Max = INT32_MIN;
    for (int i=0;i<size;i++){
        Max=max(Max,arr[i]);
    };
    cout << "Maximum of the array is" << " " << Max << endl;
}

int main(){
    int arr[5]={22,552,888,654,123};
    max(arr,5);

}