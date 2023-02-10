#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int x){
        data = x;
        next = prev = NULL;
    }
};

Node *Reverse_DLL(Node *head){
    if(head == NULL || head->next == NULL) return head; // corner case
    Node *curr = head;
    Node *prev = NULL;
    while(curr != NULL){
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;
        curr = curr->prev;
    }
    return prev->prev;
}

int main(){
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(49);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    Reverse_DLL(head);
    
    return 0;
}