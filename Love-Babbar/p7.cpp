#include <iostream>
using namespace std;

int main(){

    int arr[5][3] = {
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3},
        {1, 2, 3}
    };

    // for(int i = 0; i < 5; i++){
    //     for(int j = 0; j < 3; j++){
    //         cout << arr[i][j] << endl;
    //     }
    // }

    int arr1[5][3];
    fill(&arr1[0][0], &arr1[0][0] + 5 * 3, 10);
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}