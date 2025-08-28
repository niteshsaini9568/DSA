#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

int main(){
    
    Node* Head = new Node(1);

    cout << Head << endl;
    
    Node* temp = Head;

    cout << temp << endl;

    for(int i = 1; i < 20; i++){
        Node* newNode = new Node(i);
        temp->next = newNode;
        temp = newNode;
    }

    Node* temp2 = Head;
    while(temp2 != NULL){
        cout << temp2->data << endl;
        temp2 = temp2->next;
    }

    return 0;
}