#include <bits/stdc++.h>
using namespace std;

int print(int i, int n, int s){
    if(i > n){
        return s;
    }
    print(i + 1, n, s+i);
}

int main(){
    int n;
    cout << "Enter a Number" << endl;
    cin >> n;
    cout << print(1,n,0);
    return 0;
}