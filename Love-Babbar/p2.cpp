#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n, ans = 0, i = 1;

    while( true ){
        cin >> n;
        ans = (ans * i) + n;
        i *= 10;
        cout << ans << endl; 
    }

    return 0;
}
