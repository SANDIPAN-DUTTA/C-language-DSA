#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *insert(struct Node *head) {
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    return head;
}

struct Node *search(struct Node *head) {
    struct Node *ptr;
    int k = 0 , position = 0;
    printf("Enter the value to search: ");
    scanf("%d", &k);
    ptr = head;
    while (ptr != NULL) {
        if (ptr->data == k) {
            printf("Element %d found at position %d \n", k, position);
            return head;
        }
        ptr = ptr->next;
        position++;
    }
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
    for (int i = 0; i < 5; i++) {
        head = insert(head);
    }
    display(head);

    head = search(head);
}