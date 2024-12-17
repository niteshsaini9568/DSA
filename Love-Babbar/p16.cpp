#include <bits/stdc++.h>
using namespace std;

void printVector(int a){
    cout << 2 * a << endl;
}

int main(){
    vector <int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    for_each(arr.begin(), arr.end(), printVector);
    return 0;
}