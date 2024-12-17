#include <iostream>
using namespace std;

void f1(int i, int sum)
{
    if (i < 1)
    {
        cout << "The sum is = " << sum;
        return;
    }
    f1(i - 1, sum + i);
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    f1(n, 0);
    return 0;
}
