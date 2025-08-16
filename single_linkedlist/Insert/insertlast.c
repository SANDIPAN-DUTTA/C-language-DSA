#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data; 
    struct Node *next;
};

// this function is used to insert new nodes at the end of a linked list 
struct Node* insertlast(struct Node *head) {
    struct Node *newnode, *ptr;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("\n Enter new node data at End: ");
    scanf("%d", &newnode->data);
    newnode->next = NULL;
    if (head == NULL) {
    // If the list is empty, new node becomes the head
        return newnode;
    }
    ptr = head;
    while (ptr->next != NULL) {
        ptr = ptr->next;
    }
    ptr->next = newnode;
    return head;
}

// this function is used to display the nodes we have entered . 
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

// This is our main function . where we are using a loop to insert nodes . 
int main() {
    struct Node *head = NULL;

    for (int i = 0; i < 3; i++) {
        head = insertlast(head);
    }
    display(head);
    return 0;
}