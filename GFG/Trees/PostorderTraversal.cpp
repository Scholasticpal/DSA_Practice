// TC: we only do constant amount of time for every node, and n nodes are there so: O(n)
// SC: atmost we have no. of items in recursion call stack being the height of binary tree(H) so: O(H)

#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left;
    Node *right;
    Node (int k){
        key = k;
        left = right = NULL;
    }
};
void postorder(Node *root){
    if(root == NULL){return;}
    postorder(root->left);
    postorder(root->right);
    cout<<(root->key)<<" ";
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    postorder(root);
    return 0;
}