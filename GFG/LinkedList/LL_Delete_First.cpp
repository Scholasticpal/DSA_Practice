#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node* delFirst(Node *head){
    if(head == NULL){return NULL;}
    else{
        Node *temp = head -> next;
        delete head;
        return temp;
    }
    
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    return 0;
}

