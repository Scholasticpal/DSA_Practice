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

Node* delLast(Node *head){
    if(head == NULL){       // if there is no nodes (head is NULL)
        return NULL;
    }
    if(head->next == NULL){ // if there is a single node
        delete head;
        return NULL;
    }
        Node *curr = head;
        while(curr->next->next != NULL){
            curr = curr-> next;
        }
        delete (curr->next);
        curr->next = NULL;
    return head;

}

int main(){
    Node *head = new Node(10);
    head->next = new Node(20);
    return 0;
}