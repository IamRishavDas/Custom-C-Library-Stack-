#include<stdio.h>
#include"Stack.h"
int main(){
    Stack *stack=createStack();
    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    display(stack);
    printf("\n%d",peek(stack));
    pop(stack);
    printf("\n");
    display(stack);
}