// Height Balanced Tree:
//  -  The difference of height of left subtree and right subtree should not be more than one.
//  -  True for every Node

// Solution 1: Naive Solution
// TC: O(n2)
// - find height of left subtree and right subtree, and their difference should be <=1
// - check if left subtree is recursively balanced
// - check is right subtree is recursively balanced

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

int height(Node *root){
    if(root==NULL){
        return 0;
    }
    return max(height(root->left), height(root->right))+1;
}

bool isHBalBinaryT(Node *root){
    if(root == NULL){return true;}
    int lh = height(root->left);
    int rh = height(root->right);
    return (abs(lh-rh) <=1 && isHBalBinaryT(root->left) && isHBalBinaryT(root->right));
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

    cout<<isHBalBinaryT(root);
    return 0;
}