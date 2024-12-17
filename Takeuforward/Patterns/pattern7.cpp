# include <bits/stdc++.h>
using namespace std;

int main(){

    for(int i = 5; i >=0; i--){
        for (int j = 0; j <= i; j = 2 * i + 1)
        {
            cout << " " ;
        }
        cout << '*' << endl;
    }
    
    return 0 ;
}