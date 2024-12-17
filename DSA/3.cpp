# include <iostream>
using namespace std;

int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    for (int i=0; i<8 ; i=i+2 ){
        swap(arr[i],arr[i+1]);
        
    }
    for (int i=0; i<9 ; i++ ){
        cout<< arr[i]<<",";
    }

    return 0;
}