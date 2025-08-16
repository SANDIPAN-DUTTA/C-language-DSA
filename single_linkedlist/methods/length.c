#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insert(struct Node *head) {
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
}

int length(struct Node *head) {
    int count = 0;
    struct Node *ptr = head;
    while (ptr != NULL) {
        count++;
        ptr = ptr->next;
    }
    return count;
}

void display(struct Node *head) {
    struct Node *ptr = head;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node *head = NULL;
    for (int i = 0; i < 3; i++) {
        head = insert(head);
    }
    display(head);

    int len = length(head);
    printf("Length of the linked list: %d\n", len);
    return 0;
}