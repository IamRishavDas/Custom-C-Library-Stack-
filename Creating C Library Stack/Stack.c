#include"Stack.h"
#include<stdlib.h>
#include<stdio.h>
Stack *createStack(){
    Stack *stack=(Stack*)malloc(sizeof(Stack));
    if(stack){
        stack->top=NULL;
    }
    return stack;
}
void push(Stack *stack, int data){
    StackNode *newNode=(StackNode*)malloc(sizeof(StackNode));
    if(newNode){
        newNode->data=data;
        newNode->next=stack->top;
        stack->top=newNode;
    }
}
int pop(Stack *stack){
    if(stack==NULL){
        return -1;
    }
    StackNode *temp=stack->top;
    int data=temp->data;
    stack->top=stack->top->next;
    free(temp);

    return data;
}
int peek(Stack *stack){
    if(stack == NULL)
        return -1;
    return stack->top->data;
}
int isEmpty(Stack *stack){
    return stack->top==NULL;
}
void display(Stack *stack){
    if(stack==NULL){
        return;
    }
    StackNode *q=stack->top;
    while(q!=NULL){
        printf("%d ",q->data);
        q=q->next;
    }
}