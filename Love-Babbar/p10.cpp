#include <bits/stdc++.h>
using namespace std;


int main(){

    vector<vector<int>> arr(4 , vector<int>(3, 5));

    int rowSize = arr.size();
    int colSize = arr[0].size();

    for (int i = 0; i < rowSize; i++){
        for (int j = 0; j < colSize; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}