#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node *next;
};

// This code is written to add some nodes in the linked list .
struct Node* insert(struct Node *head) {
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
}

// This function wll now insert a node before the node where we search the data .
struct Node * insertbefore(struct Node * head){
    struct Node *newnode , *ptr , *preptr ;
    int k;
    newnode = (struct Node *) malloc (sizeof(struct Node));
    printf("\n Enter New Node data at before: ");
    scanf("%d" , &newnode -> data);
    printf("Enter value to search: ");
    scanf("%d" , &k);
    ptr = head ; 
    preptr = head ; 
    while(ptr -> data != k){
        preptr = ptr;
        ptr = ptr -> next;
    }
    preptr -> next = newnode ;
    newnode -> next = ptr;
    return head ;
}

// The display function 
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

// The main function
int main() {
    struct Node *head = NULL;

    for (int i = 0; i < 3; i++) {
        head = insert(head);
    }
    display(head);

    head = insertbefore(head);
    display(head);

    return 0;
}
