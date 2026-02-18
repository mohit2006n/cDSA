#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void create(int n) {
    int data;
    struct node *newNode, *temp;

    for (int i = 0; i < n; i++) {
        newNode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &data);

        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
            temp->next = newNode;
        }
    }
}

void display() {
    struct node *temp = head;

    if (head == NULL) {
        printf("List is empty\n");
        return;
    }

    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

void toBeging(){
    int data, n;
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value for node: ");
    scanf("%d",&data);
    newNode -> data = data;
    newNode -> next = NULL;
    
    if (head == NULL){
        head = newNode;
    }else{
        newNode -> next = head;
        head = newNode;
    }
}

void toEnd(){
    int data, n;
    struct node *newNode, *temp;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value for node: ");
    scanf("%d",&data);
    newNode -> data = data;
    newNode -> next = NULL;
    if(head == NULL){
        head = newNode;
    }
    else{
        temp = head;
        while(temp -> next != NULL){
            temp = temp -> next;
        }
        temp -> next = newNode;
    }
}

void toAnyPosition() {
    int pos, data;
    struct node *newNode, *temp;

    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &data);
    printf("Enter position: ");
    scanf("%d", &pos);

    newNode->data = data;

    temp = head;
    for (int i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void insertAfterSpecificValue() {
    int pos, data;
    struct node *newNode, *temp;

    printf("Enter the value after which you want to insert the data: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &data);

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    temp = head;
    while (temp != NULL && temp->data != pos) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in list.\n", pos);
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

int main() {
    int choice, n;
    while (1) {
        printf("\n-------- MENU --------\n");
        printf("1. CREATE\n");
        printf("2. DISPLAY\n");
        printf("3. INSERT AT BEGING\n");
        printf("4. INSERT AT END\n");
        printf("5. INSERT AT ANY POSITION\n");
        printf("6. INSERT AFTER A SPECIFIC VALUE\n");
        printf("7. EXIT\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter number of nodes: ");
                scanf("%d", &n);
                create(n);
                break;
            case 2:
                display();
                break;
            case 3:
                toBeging();
                break;
            case 4:
                toEnd();
                break;
            case 5:
                toAnyPosition();
                break;
            case 6:
                insertAfterSpecificValue();
                break;
            case 7:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}