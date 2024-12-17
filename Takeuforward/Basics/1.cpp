#include <bits/stdc++.h>
using namespace std;

// T.C is O(log10(n))

int main(){

    int lastdigit, count2 , n;
    int count = 0;
    cout << "Enter a no." ;
    cin >> n ; 


    while(n>0){
        lastdigit = n%10;
        cout << lastdigit << endl;
        count++;
        n = n/10;
    }

    cout << "The no. of digits are " << count ;

    count2 = (int)(log10(n) + 1);// Another approach where T.C is O(1)

    cout << "The no. of digits by another method are " << count2;

    return 0 ;
}



