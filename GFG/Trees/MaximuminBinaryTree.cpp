// Iterative Method
//(Preferred for skew binary tree): 
//Level order Traversal with a queue, and initialize val with INT_MIN and compare with current result.
//TC: O(n)
//SC: O(w) w - width of binary tree

// Recursive Method: 
// (Preferred for complete binary tree)
// TC: O(n) Visiting every node and constant work for every node
// SC: O(H) h - height of binary tree; at any moment we have atmost H+1 function calls in the recursion call stack
    
#include<iostream>
using namespace std;

struct Node{
    Node *left;
    Node *right;
    int key;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

int MaxinBinaryTree(Node *root){
    if(root==NULL){return INT_MIN;}
    else{
        return max(root->key, max(MaxinBinaryTree(root->left), MaxinBinaryTree(root->right)));
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);

    cout<< MaxinBinaryTree(root);
    return 0;
}