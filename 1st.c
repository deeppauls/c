#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void traversing(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element = %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third; 

    //Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 20;
    third->next = NULL;

    //Printing the data
    /*struct Node * ptr = head;
    while(ptr!=NULL)
    {
        printf("Element = %d\n",ptr->data);
        ptr=ptr->next;
    }*/
    
    traversing(head);

    return 0;
}