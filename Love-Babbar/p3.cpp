#include <iostream>
using namespace std;
bool palindrome(int x){
    int y, digit;
    int ans = 0;
    y = x;
    while (y > 0)
    {
        digit = y % 10;
        ans = digit + (ans * 10);
        y = y / 10;
    }
    return (ans == x) ? true : false;
}
int main(){
    int x;
    cin >> x;
    cout << palindrome(x);
}