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

Node *CLL_Delete_Kth(Node *head, int k){
    if(head == NULL)return head;
    if(k==1){
        return CLL_Delete_Head2(head);
    }
    Node *curr = head;
    for(int i = 0; i< k-2; i++){
        curr = curr->next;
    }
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}


int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;

    

    return 0;
}