#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node *next;
};

// this function is used to insert new nodes in the beginnning of a linked list 

struct Node* insertfirst(struct Node *head) {
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("\n Enter new node data at beginning: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
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


int main() {
    struct Node *head = NULL;

    for (int i = 0; i < 3; i++) {
        head = insertfirst(head);
    }
    display(head);
    return 0;
}