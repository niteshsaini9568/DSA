# include <bits/stdc++.h>
using namespace std; 

void pV(auto v){
        for (auto it : v)
        {
            cout << it << " ";
        }

        cout << endl;
    }

int main(){

    /*
    vector <int> v ;
    v.push_back(1);
    cout << v[0] <<  endl;

    v.emplace_back(2); // To push the value with the help of emplace_back is faster than push_back;
    cout << v[1] << endl; 

    vector < pair < int , int> > vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout << vec[0].first << " " << vec[1].second << endl; 

    vector<int> p (5,100); // A vector having all the values 100 and size 5;
    for(int i = 0 ; i < 5 ; i++ ){
        cout << p[i] << " " ;
    }

    cout << endl;

    vector<int> q(5); // A vector having all the values 100 and size 5;
    for (int i = 0; i < 5; i++)
    {
        cout << q[i] << " ";
    }

    cout << endl;

    vector <int> i = {1,2,3,4,5,6,7,8,9}; // Iterator is used to play the vector using memory address
    vector<int>::iterator it = i.begin(); // Here it is the Variable which store the MEMORY ADDRESS of the first element of vector ; 
    it++;
    cout << *(it) << " " << endl;

    cout << i.back() << endl; // back() will give you the last value of vector

    vector<int>::iterator end = i.end(); // Here end is the Variable which store the MEMORY ADDRESS of next to the last element of vector ;
    end--;
    cout << *(end) << " " << endl;

    for(vector<int>::iterator k = i.begin() ; k != i.end() ; k++ ){
        cout << *(k) << " " ; 
    }

    cout << endl;
    */

    // DELETING COMMANDS

    // vector<int>v = {1,2,3,4,5};

    // v.erase(v.begin()); // Argument for the erase function is the memory add. of the element which you want to delete.

    // for(auto it : v){
    //     cout << it << " " ;
    // }

    // cout << endl;

    // v.erase(v.begin()+2 , v.end()-1); //{Start , End}

    // for (auto it : v)
    // {
    //     cout << it << " ";
    // }

    // INSERTING COMMAND

    vector<int> v = {1, 2, 3, 4, 5};
    v.insert(v.begin() , 100);
    pV(v);

    v.insert(v.end()-1 , 100);
    pV(v);

    v.insert(v.begin(), {18, 45});
    pV(v);

    cout << v.size() ;

    v.pop_back();
    pV(v);
}