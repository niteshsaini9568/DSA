#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4};
    int query[] = {1, 4, 2, 3};
    int sum = 0;

    for(int i = 0; i <= 4; i = i + 2){
        int a = query[i];
        int b = query[i + 1];

        for(int j = a-1; j < b-1; j++ ){
            sum = sum + arr[j];
            cout << sum << endl;
        }

    }
    return 0;
}
