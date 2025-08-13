#include <bits/stdc++.h>
using namespace std;

void print(int n, int a = 0){
    if(a == n){
        return;
    }
    a++;
    cout << a << endl;
    print(n, a);
}

int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}