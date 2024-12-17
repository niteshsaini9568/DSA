# include <bits/stdc++.h>
using namespace std ;

void f1(int n , int i){
    if( n < i ){
        return ;
    }

    cout << n << endl;
    f1( n-1 , i);
}

int main(){

    int n ;
    cout << "Enter a no." ;
    cin >> n ;
    f1(n , 1);

    return 0 ;
}