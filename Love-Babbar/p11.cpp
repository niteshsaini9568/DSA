#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<int>arr(5 , 5);

    cout << arr.front() << "is the first element of the Vector" << endl;
    vector<int>::iterator it = arr.begin();
    cout << *it << "is the address first element of the Vector" << endl;

    return 0;

}