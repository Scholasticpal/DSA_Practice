// Given K = 0,1,2,3,... print all the nodes at the distance K from the root.


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

void printKDist(Node *root, int K){
    if(root == NULL){return;}
    if(K==0){cout<<(root->key)<<" ";}
    else{
        printKDist(root->left, K-1);
        printKDist(root->right, K-1);
    }
}

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    printKDist(root, 2);
    return 0;
}