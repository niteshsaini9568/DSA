#include <bits/stdc++.h>
using namespace std;

int print(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * print(n-1);
}

int main(){
    int n;
    cout << "Enter a Number = ";
    cin >> n;
    cout << "The sum is = " << print(n);
    return 0;
}