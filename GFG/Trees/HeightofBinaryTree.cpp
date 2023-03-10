// Maximum no. of nodes from root to a leaf node
// It can also be defined by max no. of edges from root to a leaf node
// TC: O(n)
// SC: O(H) - any moment recursion call stack has H+1 calls (including NULL) - H is height of binary tree

#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int height(Node *root){
    if(root == NULL){
        return 0;
    }
    else{
        return max(height(root->left), height(root->right))+1;
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout<<height(root);
    return 0;
}