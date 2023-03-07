#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *left;
    Node *right;
    int val;
    Node(int k){
        val = k;
        left = right = NULL;
    }

    bool findPath(Node* root, vector<Node*> path, int n){
        if(root == NULL){return false;}
        path.push_back(root);
        if(root->val == n){return true;}
        if(findPath(root->right, path, n) || findPath(root->left, path, n)){
            return true;
        }
        return false;
    }
    Node* lowestCommonAncestor(Node* root, Node* p, Node* q) {
        //base case
        int n1 = p->val;
        int n2 = q->val;
        vector<Node *> path1, path2;
        if(findPath(root, path1, n1)==false ||findPath(root, path2, n2) == false){
            return NULL;
        }
        for(int i = 0; i<path1.size()-1 && i<path2.size(); i++){
            if(path1[i+1] != path2[i+1]){
                return path1[i];
            }
        }
        return NULL;       
    }
};
