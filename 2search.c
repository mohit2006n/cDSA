#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

struct Node* search(struct Node* head, int key) {
    struct Node* current = head;
    while (current != NULL) {
        if (current->data == key) {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = createNode(10);
    head->next = createNode(30);
    head->next->next = createNode(20);
    head->next->next->next = createNode(40);
    head->next->next->next->next = createNode(50);

    printf("Original linked list: ");
    displayList(head);

    int key = 20;
    struct Node* result = search(head, key);
    if (result != NULL) {
        printf("Element %d found in the linked list.\n", key);
    } else {
        printf("Element %d not found in the linked list.\n", key);
    }

    return 0;
}