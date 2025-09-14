#include <iostream>
#include <vector>
using namespace std;

void binary_to_decimal(vector<int> arr){
    int n = arr.size();
    int p = 1;
    int num = 0;

    for(int i = n - 1; i >= 0; i--){
        if(arr[i] == 1) num += p;
        p *= 2;
    };

    cout << num;
}

void decimal_to_binary(int n){

    while(n > 0){
        
    }
}

// Binary to Decimal
int main(){
    vector<int> arr;
    int x;

    cout << "How many Binary Digits you have = ";
    cin >> x;

    while(x > 0){
        int inp;
        cin >> inp;
        arr.push_back(inp);
        x--;
    }

    binary_to_decimal(arr);
    
    return 0;
}