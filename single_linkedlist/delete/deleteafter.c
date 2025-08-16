#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data ;
    struct Node * next ;
};

struct Node * insert (struct Node * head){
    struct Node * newnode ;
    newnode = (struct Node *) malloc (sizeof(struct Node)) ;
    printf("enter data: ");
    scanf("%d" , &newnode -> data);
    newnode -> next = head ;
    head = newnode ;
    return head ;
}

struct Node * deleteafter (struct Node * head){
    struct Node *ptr , *preptr ;
    int k;
    printf("\n Enter data to search: ");
    scanf("%d" , &k);
    ptr = head;
    preptr = head;
    while (preptr -> data != k){
        preptr = ptr ;
        ptr = ptr -> next ;
    }
    preptr -> next = ptr -> next;
    free (ptr);
    return head ;
}

void display(struct Node *head) {
    struct Node *ptr;
    ptr = head;
    printf("\n Linked List: ");
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL \n");
}

int main (){
    struct Node * head = NULL ;
    for (int i = 0; i < 5; i++) {
        head = insert(head);
    }
    display(head);

    head = deleteafter(head);
    display(head);
}