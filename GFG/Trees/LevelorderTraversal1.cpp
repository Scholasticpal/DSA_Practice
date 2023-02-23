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

// Solution 1
// When we traverse one level completely, we push a null in the queue
// Whenever you then see NULL in the queue, it means that the level is completed and other level
// is completely int the queue. So we push NULL again.
// O(n+H) since H more NULLs will be there, also called as O(n) since n>H. 
// SC: O(w) w = width (always for level order traversal) , also called O(n) since w = n in perfect binary tree

void printLevelOrderLine(Node *root){
    if(root == NULL)return;
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size() >1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<(curr->key)<<" ";
        if(curr->left != NULL){q.push(curr->left);}
        if(curr->right != NULL){q.push(curr->right);}
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
    
    printLevelOrderLine(root);

    return 0;
}