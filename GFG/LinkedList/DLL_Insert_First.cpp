#include<iostream>
#include<stdlib.h>
#include<stdio.h>

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

Node *Insert_Begin(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    if(head!= NULL){
        head->prev = temp;
    }
    return temp;
}

int main(){
    int x = 30;
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(49);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;

    Insert_Begin(head, x);
    return 0;
}