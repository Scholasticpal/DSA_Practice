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

//Naive Approach - Search the tail and then point tail->next to temp
Node *CLL_Insert_First(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        temp->next = temp;}
    else{
        Node *curr = head;
        while(curr->next != head){
            curr = curr->next;
        }
        curr->next = temp;
        temp->next = head;
    }
    return temp;
}

//O(1) Approach - Simply insert temp at head->next then swap head and temp
Node *CLL_Insert_First2(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL){
        head = temp;
        head->next = head;
    }
    else{
    temp->next = head->next;
    head->next = temp;

    int a = head->data;
    head->data = temp->data;
    temp->data = a;
    }
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    CLL_Insert_First(head, 40);
    CLL_Insert_First2(head, 45);
    return 0;
}