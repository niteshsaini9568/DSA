#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter first number: " << endl;
    cin >> a;
    cout << "Enter second number: " << endl;
    cin >> b;

    // Ensure the numbers are positive for GCD computation
    a = abs(a);
    b = abs(b);

    // Euclidean algorithm to find GCD
    while (a != 0 && b != 0)
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    // The non-zero value is the GCD
    if (a == 0)
    {
        cout << "The GCD/HCF is: " << b << endl;
    }
    else
    {
        cout << "The GCD/HCF is: " << a << endl;
    }

    return 0;
}
