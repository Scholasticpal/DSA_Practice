// TC: O(n): Traverses every node exactly once, i.e. every node enetered in queue once
// and constant amount of work for every node.
// SC: O(w) w=width or theta(n)
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

int maxWidth(Node *root){
    if(root==NULL){return 0;}
    queue<Node *> q;
    q.push(root);
    int ans = 0;
    while(!q.empty()){
        int count = q.size();
        ans = max(ans, count);
        for(int i = 0; i<count; i++){
            Node *curr = q.front();
            q.pop();
            if(curr->left != NULL){q.push(curr->left);}
            if(curr->right != NULL){q.push(curr->right);}
        }
    }
    return ans;
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

    cout<<maxWidth(root);
    return 0;
}