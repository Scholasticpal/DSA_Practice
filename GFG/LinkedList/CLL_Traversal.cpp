#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

//for loop
void CLL_Traversal(Node* head){
    if(head == NULL) return;
    cout<<(head->data)<<" ";
    for(Node *p = head->next; p!= head; p = p->next){
        cout<<(p->data)<<" ";
    }
}

//do-while loop
void CLL_Traversal2(Node *head){
    if(head == NULL) return;
    Node *p = head;
    do{
        cout<<(p->data)<<" ";
        p = p->next;
    }while(p!= head);
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    CLL_Traversal(head);
    CLL_Traversal2(head);
    return 0;
}