/*
    Circular Linked List
    - Next of last node points to the first node (head node)
    - struct is same as Singly Linked List*/

// Single Node Circular Linked List is has head->next = head itself.

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

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = head;
    return 0;
}