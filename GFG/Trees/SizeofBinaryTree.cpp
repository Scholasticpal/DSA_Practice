//Size of Binary Tree: no. of nodes in a binary tree
// TC: O(n)
// SC: O(H) - recursion calls take place at every level
#include<iostream>
#include <queue>
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

int SizeofBinaryTree(Node *root){
    if(root==NULL){return 0;}
    else{
        return SizeofBinaryTree(root->left)+ SizeofBinaryTree(root->right) +1;
    }
    return 0;
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
    
    cout<<SizeofBinaryTree(root);

    return 0;
}

