// Reverse a no.

# include <bits/stdc++.h>
using namespace std ; 

int main(){
    
    int n , reverseN , lastdigit ;
    reverseN = 0 ;
    cout << "Enter a  no. = ";
    cin >> n ;

    while (n>0)
    {
        lastdigit = n % 10 ;
        reverseN = (reverseN * 10) + lastdigit;

        n = n/10;
    }

    cout << "The reverse no. is = " << reverseN;

    return 0 ;
}