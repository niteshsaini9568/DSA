# include <bits/stdc++.h>
using namespace std;

void print(int x){
    cout << 2 * x << ", ";
}

int main(){

    vector <int> arr;
    int x; 

    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    // for each -> to play with each element of the array or the vector
    // for_each(arr.begin() , arr.end() , print);

    // Find -> to find any element in the vector or the array
    int target = 5;
    auto it = find(arr.begin(), arr.end(), target);
    cout << *it <<endl;

    return 0;
}