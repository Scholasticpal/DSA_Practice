// Children Sum Property :
//      -  Sum of values of left and right child should be equal to nodes value.
//      -  If one is present, then value of that node is equal to root.
//      -  If root is NULL or single node, then also print Yes.
// TC: O(n)
// SC: O(H)
    
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

bool isChildrenSum(Node* root){
    if(root==NULL){
        return true;
    }
    if(root->left == NULL && root->right==NULL) // IMP basecase for single node tree or leaf nodes.
    {return true;}

    int sum = 0;

    if(root->left != NULL){sum += root->left->key;}
    if(root->right != NULL){sum += root->right->key;}
    return (root->key == sum && isChildrenSum(root->left) && isChildrenSum(root->right));
}
int main(){
    Node *root = new Node(150);
    root->left = new Node(90);
    root->right = new Node(60);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->right = new Node(60);
    root->right->right->left = new Node(40);
    root->right->right->right = new Node(20);

    cout<< isChildrenSum(root);
    return 0;
}