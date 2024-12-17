# include <iostream>
# include <vector>
using namespace std;

int main(){

    // Initialising the vector
    vector<int> a;

    cout << "The capacity of the vector is" << a.capacity() << endl; // Here capacity means the memory allocated to vector;
    cout << "The size of the vector is" << a.size() << endl; // Here size defines how many elements are there in vector

    a.push_back(1); // To store the Value;

    cout << "The capacity of the vector is" << a.capacity() << endl; 
    cout << "The size of the vector is" << a.size() << endl; 

    a.push_back(2);

    cout << "The capacity of the vector is" << a.capacity() << endl; 
    cout << "The size of the vector is" << a.size() << endl; 
    
    a.push_back(3);

    cout << "The capacity of the vector is" << a.capacity() << endl; 
    cout << "The size of the vector is" << a.size() << endl; 
    
    a.push_back(4);

    cout << "The capacity of the vector is" << a.capacity() << endl; 
    cout << "The size of the vector is" << a.size() << endl; 
    cout << "The element at index 2 : " << a.at(2) << endl;
    cout << "The element at front of the vector" << a.front() << endl;
    cout << "The element at back of the vector" << a.back() << endl;

    a.pop_back(); // Clearing the last element from the vector;
    a.clear(); // Deleting the whole vector;

    cout << "After clearing, The size of the vector is" << a.size() << endl;
    cout << "After clearing, The Capacity of the vector is" << a.capacity() << endl;

    // Another way of Initialising the Vector

    vector <int> v(5,1);

    // Here a vector of size 5 having all the values equal to one is created;

    for(int i=0; i<v.capacity(); i++){
        cout << "Element "<<i+1<<": "<< v.at(i)<<endl;
    };

    return 0;


}