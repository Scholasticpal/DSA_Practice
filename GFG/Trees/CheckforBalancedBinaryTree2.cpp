// Height Balanced Tree:
//  -  The difference of height of left subtree and right subtree should not be more than one.
//  -  True for every Node

//Solution 2: Optimized
// TC: O(n)


#include<iostream>
#include <math.h>
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

int isBalanced2(Node *root){
    if(root==NULL){return 0;}
    int lh = isBalanced2(root->left);
    if(lh== -1){return -1;}
    int rh = isBalanced2(root->right);
    if(rh == -1){return -1;}
    if(abs(lh-rh)>1){return -1;}
    else{return max(lh,rh)+1;}
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

    if(isBalanced2(root)==-1){cout<<"false";}
    else{
        cout<<"true";
    }
    return 0;
}