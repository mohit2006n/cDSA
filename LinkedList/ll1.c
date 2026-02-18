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
        printf("Enter value for node %d: ", i + 1);
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
    printf("\n");
}

void insertBeging(){
    int data;
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter value for node: ");
    scanf("%d",&data);
    newNode -> data = data;
    
    if (head == NULL){
        newNode -> next = NULL;
        head = newNode;
    }else{
        newNode -> next = head;
        head = newNode;
    }
}

void insertEnd(){
    int data;
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

void insertAnyPosition() {
    int pos, data, i;
    struct node *newNode, *temp;

    printf("Enter position: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &data);

    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;

    if (pos == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    temp = head;
    for (i = 1; i < pos-1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Position out of bounds\n");
    } else {
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void insertAfterSpecificValue() {
    int pos, data;
    struct node *newNode, *temp;

    printf("Enter the value after which you want to insert the data: ");
    scanf("%d", &pos);
    printf("Enter data: ");
    scanf("%d", &data);

    temp = head;
    while (temp != NULL && temp->data != pos) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in list.\n", pos);
    } else {
        newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = data;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void deleteBegining() {
    struct node *temp;

    if(head == NULL){
        printf("No linkied list found....");
    }else if (head -> next == NULL){
        free(head);
    }else{
        head = head->next;
    }
}



void deleteEnd() {
    int pos, i;
    struct node *temp;

    temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
}

void deleteAnyPosition() {
    int pos, i;
    struct node *temp, *toDelete;

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    temp = head;

    if (pos == 1) {
        head = head->next;
        return;
    }

    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }
    // 10 20 30 40
    toDelete = temp->next;
    temp->next = toDelete->next;
    free(toDelete);
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
        printf("7. DELETE AT BEGINIG\n");
        printf("8. DELETE AT ANY POSITION\n");
        printf("9. EXIT\n");
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
                insertBeging();
                break;
            case 4:
                insertEnd();
                break;
            case 5:
                insertAnyPosition();
                break;
            case 6:
                insertAfterSpecificValue();
                break;
            case 7:
                deleteBegining();
                break;
            case 8:
                deleteAnyPosition();
                break;
            case 9:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}