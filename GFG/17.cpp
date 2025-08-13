# include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> arr = {1,2,3,1,2,3,1,2,3,1,3,3,2};
    vector<int> hash(3,0);
    
    for(int i = 0; i < arr.size(); i++){
        hash[arr[i] - 1]++;
    };

    for(int i = 0; i < hash.size(); i++){
        cout << hash[i] << endl;
    };

    return 0;
}