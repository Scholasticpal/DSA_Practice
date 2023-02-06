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

Node *InsertFirst(Node *head, int x){
    Node *temp = new Node(x);
    temp->next = head;
    return temp;
}

int main(){
    Node *head = NULL;
    head = InsertFirst(head, 30);
    head = InsertFirst(head, 20);
    head = InsertFirst(head, 10);
    return 0;
}