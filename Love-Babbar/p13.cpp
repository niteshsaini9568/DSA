# include <bits/stdc++.h>
using namespace std;


int main(){

    unordered_map <string , string> table;

    table["in"] = "India";
    table.insert(make_pair("br" , "Brazil"));

    pair<string , string> p;
    p.first = "en";
    p.second = "England1";
    pair<string, string> p1;
    p1.first = "en1";
    p1.second = "England2";
    pair<string, string> p2;
    p2.first = "en2";
    p2.second = "England3";

    table.insert(p);
    table.insert(p1);
    table.insert(p2);

    unordered_map<string , string>::iterator it = table.begin();

    while( it != table.end()){
        pair<string , string> p = *it;
        cout << p.first << " " << p.second << endl;
        ++it;
    }

    table.find("n") != table.end() ? cout << "Key found" << endl : cout << "Key not found" << endl;

    return 0;
}
