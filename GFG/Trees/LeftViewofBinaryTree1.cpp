// Solution 1: Recursive- Preorder Traversal
// TC: Theta(n)
// SC: Theta(H)
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

int maxlevel=0;
void LeftView(Node *root, int level){
    if(root==NULL){return;}
    if(maxlevel<level){
        cout<<(root->key)<<" ";
        maxlevel = level;
    }
    LeftView(root->left, level+1);
    LeftView(root->right, level+1);
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

    LeftView(root, 1);
    return 0;
}