// Replace the character

#include<bits/stdc++.h>
using namespace std;

int main(){
    char arr[100];
    char from_replace; // _
    char to_replace; // @

    cout << "Enter the Sentence = ";
    cin.getline(arr, 100);

    cout << "Enter the character to replace = " << endl;
    cin >> to_replace;

    cout << "Enter the character from replace = " << endl;
    cin >> from_replace;

    for(int i = 0; i < 100; i++){
        if(arr[i] == to_replace){
            arr[i] = from_replace;
        }
    }

    cout << arr;

    return 0;
}