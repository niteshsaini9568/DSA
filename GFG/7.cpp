#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = 9;

    int area = 0;
    int i = 0;
    int j = n - 1;

    while(i < j) {
        int len = min(arr[i], arr[j]);
        int breadth = j - i;

        int new_area = len * breadth;
        area = max(new_area, area);

        if(arr[i] < arr[j]) {
            i++;
        } else {
            j--;
        }
    }

    cout << area;

    return 0;
}
