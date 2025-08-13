#include <bits/stdc++.h>
using namespace std;

void print(int n, int a = 0){
    a = n;
    if( a == 0){
        return;
    }
    cout << a << endl;
    a--;
    print(a);
}

int main(){
    int n;
    cin >> n;
    print(n);
    return 0;
}