#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    } 
};

void Iterative_traversal(Node* root){
    stack<Node *> s;
    s.push(root);

    while(!s.empty()){
        Node* a = s.top();
        if(a->left != NULL){
            s.push(a->left);
        }else{
            cout << s.top() << " " ;
            s.pop();
        }

        if(a->right != NULL){
            s.push(a->right);
        }else{
            cout << s.top() << " " ;
            s.pop();
        }
    }
}


int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);
    Iterative_traversal(root);
    return 0;
}
