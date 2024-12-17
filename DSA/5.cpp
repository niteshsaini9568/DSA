# include <iostream>
using namespace std;

int repeated_element(int* arr,int size,int n){
    int sum1=((n)*(n+1))/2;
    int sum2=0;
    for(int i=0; i<size; i++){
        sum2=sum2+arr[i];
    };
    return sum2-sum1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,9};
    int size =sizeof(arr)/sizeof(arr[0]);
    cout << repeated_element(arr,size,9);
    return 0;
}