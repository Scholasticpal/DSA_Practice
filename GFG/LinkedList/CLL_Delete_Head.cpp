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

//Naive Approach
Node *CLL_Delete_Head(Node *head){
    Node *curr = head;
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;
    }
    else{
    while(curr->next != head){
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return (curr->next);
    }

}

//O(1) Approach
Node *CLL_Delete_Head2(Node *head){
    if(head == NULL) return NULL;
    if(head->next == NULL){
        delete head;
        return NULL;}
    else{
        head->data = head->next->data;
        Node *temp = head->next;
        head->next = head->next->next;
        delete temp;
        return head;
    }
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    CLL_Delete_Head(head);
    CLL_Delete_Head2(head);

    return 0;
}