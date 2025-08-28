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
    Node* Head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(20);

    Head->next = a;
    a->next = b;
    b->next = c;

    Node* temp = Head;
    while(temp != NULL){
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}