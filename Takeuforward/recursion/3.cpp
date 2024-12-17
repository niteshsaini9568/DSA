#include <iostream>
using namespace std;

int f1(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * f1(n-1);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << f1(n);
    
    return 0;
}
