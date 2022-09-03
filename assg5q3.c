#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node * next;
};

void traversing(struct node * ptr){
    printf("\n");
    while(ptr!=NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertAtBeginning(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct node * insertAtEnd(struct node * head, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * p = head;
    ptr->data = data;
    while(p->next!=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->next = NULL;
    return ptr;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 12;
    second->next = third;

    third->data = 24;
    third->next = fourth;

    fourth->data = 32;
    fourth->next = NULL;

    traversing(head);
    head = insertAtBeginning(head, 2);
    traversing(head);
    insertAtEnd(head,44);
    traversing(head);


}