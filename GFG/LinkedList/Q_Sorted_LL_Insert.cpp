// Sorted Insert in a Linked List
// I/P: 10->20->30->40     x=25
// O/P: 10->20->25->30->40

// TC: Theta(n)

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node *SortedInsert(Node *head, int x){
    Node *temp = new Node(x);
    Node *curr = head;
    if(head == NULL)return temp;
    if(x < head->data){
        temp->next = head;
        return temp;
    }
    while(curr->next != NULL && curr->next->data < x){
        curr = curr->next;
    }
    temp->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);

    SortedInsert(head, 20);
    return 0;
}