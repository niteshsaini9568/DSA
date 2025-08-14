# include <bits/stdc++.h>
using namespace std;

void sum_of_subsequence(int arr[], int sum, int n, int s, int i, vector<int> ds){
    if( i == n){
        if(s == sum){
            for(auto &it : ds){
                cout << it << " ";
            };
            cout << endl;
        }
        return;
    }

    ds.push_back(arr[i]);
    s += arr[i];
    sum_of_subsequence(arr, sum, n, s, i+1, ds);

    s -= arr[i];
    ds.pop_back();
    sum_of_subsequence(arr, sum, n, s, i+1, ds);    

}

int main(){
    int arr[] = {1,2,3,4,5};
    int sum = 5;
    int n = 5;
    vector<int> ds;

    sum_of_subsequence(arr, sum, n, 0, 0, ds);




    return 0;
}