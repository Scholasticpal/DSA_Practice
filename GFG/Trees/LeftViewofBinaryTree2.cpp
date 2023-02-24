// Solution 2: Iterative- Level order Traversal and print only val at i = 0
// TC: Theta(n)
// SC: Theta(w) or O(n)
#include<iostream>
#include <queue>
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

void LeftView2(Node *root){
    if(root==NULL){return;}
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int count = q.size();
        for(int i = 0; i< count; i++){
            Node *curr = q.front();
            q.pop();
            if(i==0){
                cout<<(curr->key)<<" ";
            }
            if(curr->left!= NULL){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
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

    LeftView2(root);
    return 0;
}