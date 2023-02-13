// Array Implementation of C++
#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct MyStack{
    int *arr;
    int cap;
    int top;
    MyStack(int c){ //Stack is created when MyStack constructor is called.
        cap = c;
        arr = new int[cap];
        top = -1;
    }
    void push(int x){
        top++;
        arr[top] = x;
    }

    int pop(){
        int res = arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }

    int size(){
        return (top+1);
    }

    bool isEmpty(){
        return (top == -1);
    }
};

int main(){
    MyStack s(5);
    cout<<s.pop()<<endl;
    cout<<s.peek()<<endl;
}