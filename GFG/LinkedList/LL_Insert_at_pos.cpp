#include<bits/stdc++.h>
#include<stdio.h>
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

Node* insertAtPos(Node *head, int pos, int data){
    Node *temp = new Node(data);
    
    if(pos == 1){ //corner case if need to insert in start
        temp->next = head;
        return temp;
    }

    Node *curr = head;
    for(int i = 1; i<= pos-2 && curr != NULL; i++){
        curr = curr-> next;
    }
    if(curr == NULL) return head; // corner case if pos is beyond linked list size

    temp ->next = curr->next;
    curr->next = temp;
    return head;
}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    int pos = 2;
    int data = 45;
    insertAtPos(head, pos, data);
    return 0;
}