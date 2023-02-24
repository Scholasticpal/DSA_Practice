// The order of values in tree should be acc to inorder traversal
// the dll should be inplace, i.e. no extra space attributed

//Use left and right as prev and next respectively
// TC: O(n)
//SC: O(H)
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
Node* BTtoDLL(Node *root){
static Node* prev = NULL;
    if(root== NULL){return root;}
    Node *head = BTtoDLL(root->left);
    if(prev==NULL){head = root;}
    else{
        root->left = prev;
        prev->right = root;
    }
    prev = root;
    BTtoDLL(root->right);
    return head;
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

    BTtoDLL(root);
    return 0;
}