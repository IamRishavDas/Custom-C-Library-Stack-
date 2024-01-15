#include<stdio.h>
#include "LinkedList.h"

// typedef int array[10];
// array a[10];


int main(){
    
    LinkedList *head=NULL;
    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertFront(&head, 5);
    display(head);
    deleteNode(&head, 30);
    display(head);
    printf("\n%d ",searchNode(head, 40));
    printf("\n%d ",size(head));

    return 0;
}   