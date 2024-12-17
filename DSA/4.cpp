// Q- We have to find the unique element in the array.
// condition every element is 2 times repeat except one, we have to find that element 
// Array size is odd in number 


# include <iostream>
using namespace std;

int single_element(int* arr,int size){
    int ans=0;
    for(int i=0; i<size; i++){
       ans=ans^arr[i]; // Here we are using the xor operator {a^a=0} and {a^0=a} 
    }
    return ans;
}
int main(){
    int arr[9]={1,2,1,3,3,4,4,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Single element is " << single_element(arr,size);
    return 0;
}