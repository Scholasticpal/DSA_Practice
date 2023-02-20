// Binary Trees

// Every Node has atmost 2 children 
// degree of a node is atmost 2
// Variations of binary tree:
// - Binary Search Tree variation of binary tree is the most used tree data structure.
// - Binary Heap thats used for priority queues
// - Segment tree thats used for range search query

// Binary Tree Implementation:
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

int main(){
    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
}

/*Empty Binary Tree
int main(){
    Node *root = NULL
}
*/
