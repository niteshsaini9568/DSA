#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Queue{
    Node* head;
    Node* tail;

public:
    Queue(){
        head = tail = NULL;
    }

    void push(int data){
        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode; 
            tail = newNode;
        }
    }

    void pop(){
        if(head == NULL) return;

        Node* temp = head;
        head = head->next;

        delete temp;
    }

    void front(){
        if(head == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << head->data << endl;
    }

    bool empty(){
        return head == NULL;
    }


};


int main(){

}