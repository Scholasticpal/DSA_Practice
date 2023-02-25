//TC: O(n2)
//searching can be done using storing keys and values in hashmap then do lookup instead searching
// SC: O(n) 
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

int p = 0;
Node* consBT(int in[], int pre[], int start,int end){
    if(start>end){return NULL;}
    Node *root = new Node(pre[p++]);
    int i=0;
    for(int k = start; k<= end; k++){
        if(in[k] == root->key){
            i = k;
            break;
        }
    }
    root->left = consBT(in, pre, start, i-1);
    root->right = consBT(in, pre, i+1, end);
    return root;
}
int main(){
    int in[]={20,10,40,30,50};
    int pre[]={10,20,30,40,50};
    int len = sizeof(pre)/sizeof(pre[0]);
    consBT(in, pre, 0, len-1);
    return 0;
}