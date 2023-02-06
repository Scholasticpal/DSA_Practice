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

Node* insertLast(Node *head, int x){
    Node *temp = new Node(x);
    if(head == NULL) return temp;
    Node *curr = head;
    while(curr->next){
        curr=curr->next;
    }
    curr->next = temp;
    return head;
}

int main(){
    Node *head = NULL;
    head = insertLast(head, 10);
    head = insertLast(head, 20);
    head = insertLast(head, 30);
    return 0;
}