#include<bits/stdc++.h>
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

void Inorder(Node* node){
    if(node == NULL){
        return;
    }
    preorder(node->left);
    cout << node->data <<endl;
    preorder(node->right);
}

void preorder(Node* node){
    if(node == NULL){
        return;
    }
    cout << node->data <<endl;
    preorder(node->left);
    preorder(node->right);
}

void postorder(Node* node){
    if(node == NULL){
        return;
    }
    preorder(node->left);
    preorder(node->right);
    cout << node->data <<endl;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    preorder(root);
    return 0;
}