# include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL; 
    }

    void push_front(int x){
        Node* newNode = new Node(x);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void push_back(int val){
        Node* newNode = new Node(val);

        if(head == NULL){
            head = tail = newNode;
        }else{
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front(){
        if(head == NULL){
            return;
        }

        Node* temp = head;
        head = head->next;
        temp->next = NULL;
    }

    void pop_back(){
        if(head == NULL){
            return;
        }

        Node* temp = head;

        while(temp->next->next == NULL){
            temp = temp->next;
        };

        temp->next = NULL;
        delete tail;
        tail = temp;
    }
 
    void print_ll(){
        Node* temp = head;

        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        };

        cout << endl;
    }

    
};

int main(){
    List ll;

    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);
    ll.push_front(0);

    ll.print_ll();

    return 0;
}