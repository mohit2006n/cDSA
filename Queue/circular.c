#include <stdio.h>
#include <stdlib.h>

#define MAX 10

int front = -1, rear = -1;
int queue[MAX];

void insert() {
    int val;

    if ((front == 0 && rear == MAX - 1) || (rear + 1) % MAX == front) {
        printf("Queue Overflow (Full)\n");
        return;
    }

    printf("Enter value to Insert: ");
    scanf("%d", &val);

    // If empty
    if (front == -1) {
        front = 0;
        rear = 0;
    } 
    else {
        rear = (rear + 1) % MAX;
    }

    queue[rear] = val;
    printf("%d inserted\n", val);
}

void delete() {
    if (front == -1) {
        printf("Queue Underflow (Empty)\n");
        return;
    }

    int deleted = queue[front];
    printf("Deleted: %d\n", deleted);

    if (front == rear) {
        front = -1;
        rear = -1;
    } 
    else {
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue elements: ");

    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear)
            break;
        i = (i + 1) % MAX;
    }

    printf("\n");
}

int main() {
    int ch;
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
