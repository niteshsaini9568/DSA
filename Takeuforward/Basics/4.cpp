#include <bits/stdc++.h>
using namespace std;

int main()
{

    int lastdigit, n ,m, armstrong;
    cout << "Enter the no. = " ;
    cin >> m;
    n=m;
    while(n > 0){
        lastdigit = n % 10;
        armstrong = armstrong + (lastdigit * lastdigit * lastdigit);
        n = n/10 ; 
    }

    if (armstrong == m){
        cout << "The no. is armstrong" ; 
    }else{
        cout << "The no. is not an armstrong";
    }

    return 0;

}