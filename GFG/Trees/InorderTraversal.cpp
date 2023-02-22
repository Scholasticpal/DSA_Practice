// TC: we only do constant amount of time for every node, and n nodes are there so: O(n)
// SC: atmost we have no. of items in recursion call stack being the height of binary tree(H) so: O(H)
#include<iostream>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void inorder(Node *root){
    if(root == NULL){return;}
    inorder(root->left);
    cout<<(root->key)<<" ";
    inorder(root->right);
}

int main(){
    Node *root = new Node(10); //Creating binary tree
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    inorder(root); 
    return 0;
}