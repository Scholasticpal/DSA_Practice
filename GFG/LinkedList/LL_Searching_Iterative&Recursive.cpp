/* I/P: 10->5->20->40
        x = 20
   O/P: 3 
   if element not there, return -1*/

#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

int searchLLIterative(Node *head, int x){
    int pos=1;
    Node *curr = head;
    while(curr != NULL){
        
        if(curr->data == x){
            return pos;
        }
        else{
            pos++;
            curr = curr->next;
        }
    }
    return -1;
}

int searchLLRecursive(Node *head, int x){
    if(head == NULL) return -1;
    if(head->data == x){
        return 1;
    }
    else{
        int res = searchLLRecursive(head->next, x);
        if(res == -1){return -1;}
        else{return (res+1);}
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    int x = 20;
    searchLLIterative(head,x);
    searchLLRecursive(head,x);
    return 0;
}
