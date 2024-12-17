# include <bits/stdc++.h>
using namespace std ; 

int main(){
    
    pair <int, int> p = {1,2};
    cout << p.first << " " << p.second << endl ; 

    pair <int , pair<int , int >> q = {1,{1,2}};
    cout << q.first << endl;
    cout << q.second.first << " " << q.second.second << endl ; 
}