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

Node* Insert_Last_DLL(Node *head, int data){
    Node *temp = new Node(data);
    Node *curr = head;
    if(head == NULL){
        return temp;
    }
    while(curr->next != NULL){
        curr = curr->next;
    }
    curr->next = temp;
    temp->prev = curr;
    return head;
}

int main(){
    Node *head = NULL;
    head = Insert_Last_DLL(head, 10);
    head = Insert_Last_DLL(head, 20);
    head = Insert_Last_DLL(head, 30);
    return 0;
}