#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , count;
    count = 0 ;
            cout
        << "Enter a number: ";
    cin >> n;

    cout << "Conclusion: ";
    for (int i = 1 ; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            count++;
            if ((n / i) != i )
            {
                count++;
            }
        }  
    }
    if (count == 2)
        {
            cout << "This is a prime no.";
        }else{
            cout << "This is not a prime no.";
        }

    cout << endl;
    return 0;
}
