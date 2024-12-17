#include <iostream>
using namespace std;

vector<int> singleNumber(int x, int y)
{
    int a = 0;
    int size = y - x;
    int arr[size] ;
    for (int i = x; i <= y; i++)
    {
        a = i % 10;
        i = i/10;
        if(a != i){
            arr[size].push(i);
        }
    }
    return arr;
}

int main(){
    int x, y;
    cin >> x >> y;
    cout << singleNumber(x,y);
    return 0;
}