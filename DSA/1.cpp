# include <iostream>
using namespace std;

int main(){
    int arr[50]={25};
    for (int i=0;i<50;i++)
        cout<<arr[i]<<" ";
}

// Here only arr[1]=25 and rest of the values become zero.
// With the help of macros we initialise the array i.e we can put the same value in complete arr. 