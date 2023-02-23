// Level Order Traversal - Line by line

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

// Solution 2
// two loops, one for calling each level, one for printing a level.
// TC: We traverse n nodes. For Every node, theres enqueue once and dequeue once (O(1) each)
// we do this for n nodes, so O(n).
// SC: theta(w) w = width or O(n)

void printLevelorderLine2(Node *root){
    if(root == NULL){return;}
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        int count = q.size();
        for(int i = 0; i<count; i++){
        Node* curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left != NULL){q.push(curr->left);}
        if(curr->right != NULL){q.push(curr->right);}
        }
        cout<<"\n";
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
    
    printLevelorderLine2(root);

    return 0;
}