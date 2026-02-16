#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL, *front;

void insert(){
    int data; 
    struct node *rear = NULL, *temp;
    rear = (struct node *)malloc(sizeof(struct node));
    printf("Enter the valaue you want to Insert: ");
    scanf("%d", &data);
    rear -> data = data;
    rear -> next = NULL;

    if (head == NULL){
        head = rear;
        front = head;
    }else {
        temp = head;
        while (temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = rear;
    }
}

void delete(){
    if (head == NULL){
        printf("NO linked list present...\n");
    }else{
        front = head -> next; 
        head -> next = front;
        free(head);
        head = front;
    }
}

void display(){
    struct node *temp;
    temp = head;
    if (temp == NULL){
        printf("Queue is empty.");
    }
    while (temp != NULL){
        printf("%d ", temp->data);
        temp = temp -> next;
    }
    printf("\n");
}

int main() {
    int ch;
    int val;
    printf("\n--- MENU ---\n1. INSERT\n2. DELETE\n3. DISPLAY\n4. EXIT\n");
    while (1) {
        printf("\nEnter your choice: ");
        if (scanf("%d", &ch) != 1) {
            printf("Invalid input\n");
            break;
        }
        switch (ch) {
            case 1: insert(); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}