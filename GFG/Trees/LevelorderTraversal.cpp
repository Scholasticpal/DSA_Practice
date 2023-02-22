// Level Order Traversal

// Method1: 
// Calculate height (H) and then use 'Print Nodes at distance K' code to print nodes in a loop from K = 0 to H.
// Inefficient, as O(n) time for finding height, then loop from 0 to H, which find nodes at each level.
// TC: O(n + H*n) = O(H*n)

//Method 2:
// - Enqueue a level into queue
// - take out the items from queue and print them
// - while taking out the item, enqueue its children
// - Each nodes go in and then come out of queue, so enqueue - O(1) and then dequeue - O(1)
// TC: O(n) since for n nodes enqueue and dequeue. theta(n) to be more precise
// SC: O(n), since somethimes space is constant, and sometimes n
// DC: general answer - theta(w) - where w is width of binary tree

#include <iostream>
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

void PrintLevel(Node *root){
    if(root == NULL){return;}
    queue<Node*> q;
    q.push(root);
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        cout<<(curr->key)<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
}


int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    PrintLevel(root);
    return 0;
}