# include <bits/stdc++.h>
using namespace std;

int main(){

    // Creating 2D vector
    // vector<vector<int>>arr(4,vector<int>(4,1));

    // cout << arr.size() << "are the no. of rows in 2D vector" << endl;
    // cout << arr[0].size() << "are the no. of coloumns in 2D vector" << endl;

    // for (int i = 0; i < 4; i++){
    //     for (int j = 0; j < 4; j++)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }

    //Creating List STL , it store the data in non-contginous manner , actually it store the data in the form of doubly linked list;

    list<int> myList;

    myList.push_back(10);
    myList.push_back(20);
    myList.push_front(10);
    myList.push_front(20);

    list<int> myList2;

    myList2.push_back(10);
    myList2.push_back(20);
    myList2.push_front(10);
    myList2.push_front(20);

    cout << myList.size() << " is the size of the list container" << endl;
    cout << myList.front() << " is the first of the list container" << endl;
    cout << myList.back() << " is the last of the list container" << endl;
    cout << "Before clearing the List" << endl;
    myList.empty() ? cout << "List is empty" : cout << "List is not empty" << endl;

    myList.swap(myList2);

    list<int>::iterator it = myList.begin();
    list<int>::iterator it2 = myList2.begin();


    while(it != myList.end()){
        cout << *it << endl;
        ++it;
    }

    while (it2 != myList2.end()){
        cout << *it2 << endl;
        ++it2;
    }

    cout << "After clearing the List" << endl;
    myList.clear();
    myList.empty() ? cout << "List is empty" : cout << "List is not empty";

    return 0;
}