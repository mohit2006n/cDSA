#include <stdio.h>
#include <stdlib.h>

// Node structure for doubly linked list
struct node {
    int data;
    struct Node* prev;
    struct Node* next;
};

struct node *head = NULL;

void createNode(int n){
    int data;
    struct node *newNode, *temp;
    for(int i = 0; i < n; i++){
        newNode = (struct node*)malloc (sizeof(struct node));
        printf("Enter the data for node %d : ", i+1);
        scanf("%d", &data);
        newNode -> data = data;
        newNode -> next = NULL;
        newNode -> prev = NULL;

        if(head == NULL){
            head = newNode;
        }else{
            temp = head;
            while(temp -> next != NULL){
                temp = temp -> next;
            }
            temp -> next = newNode;
            temp -> prev = temp;
        }
    }
}

// struct Node{
    //     int data;
    //     struct Node* prev;
    //     struct Node* next;
    // };
    
// Function to create a new node
// struct Node* createNode(int data) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     if (newNode == NULL) {
//         printf("Memory allocation failed!\n");
//         return NULL;
//     }
//     newNode->data = data;
//     newNode->prev = NULL;
//     newNode->next = NULL;
//     return newNode;
// }

// // Create a doubly linked list with initial values
// struct Node* createList() {
//     struct Node* head = NULL;
//     int n, data;
    
//     printf("Enter number of nodes: ");
//     scanf("%d", &n);
    
//     if (n <= 0) {
//         return NULL;
//     }
//     int i;
//     for (i = 0; i < n; i++) {
//         printf("Enter data for node %d: ", i + 1);
//         scanf("%d", &data);
        
//         struct Node* newNode = createNode(data);
//         if (head == NULL) {
//             head = newNode;
//         } else {
//             struct Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = newNode;
//             newNode->prev = temp;
//         }
//     }
//     return head;
// }
// // Traverse from beginning to end
// void traverseForward(struct Node* head) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return;
//     }
    
//     struct Node* temp = head;
//     printf("List (forward): ");
//     while (temp != NULL) {
//         printf("%d ", temp->data);
//         if (temp->next != NULL) {
//             printf("<-> ");
//         }
//         temp = temp->next;
//     }
//     printf("\n");
// }

// // Insert at the beginning
// struct Node* insertAtBeginning(struct Node* head, int data) {
//     struct Node* newNode = createNode(data);
    
//     if (head != NULL) {
//         newNode->next = head;
//         head->prev = newNode;
//     }
    
//     return newNode;
// }

// // Insert at the end
// struct Node* insertAtEnd(struct Node* head, int data) {
//     struct Node* newNode = createNode(data);
    
//     if (head == NULL) {
//         return newNode;
//     }
    
//     struct Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
    
//     temp->next = newNode;
//     newNode->prev = temp;
    
//     return head;
// }

// // Insert at a specific position (1-indexed)
// struct Node* insertAtPosition(struct Node* head, int data, int position) {
//     if (position < 1) {
//         printf("Invalid position!\n");
//         return head;
//     }
    
//     if (position == 1) {
//         return insertAtBeginning(head, data);
//     }
    
//     struct Node* newNode = createNode(data);
//     struct Node* temp = head;
//     int i;
//     for (i = 1; i < position - 1 && temp != NULL; i++) {
//         temp = temp->next;
//     }
    
//     if (temp == NULL) {
//         printf("Position out of bounds!\n");
//         free(newNode);
//         return head;
//     }
    
//     newNode->next = temp->next;
//     newNode->prev = temp;
    
//     if (temp->next != NULL) {
//         temp->next->prev = newNode;
//     }
    
//     temp->next = newNode;
    
//     return head;
// }

// // Insert after a specific value
// struct Node* insertAfterValue(struct Node* head, int data, int value) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return head;
//     }
    
//     struct Node* temp = head;
    
//     while (temp != NULL && temp->data != value) {
//         temp = temp->next;
//     }
    
//     if (temp == NULL) {
//         printf("Value %d not found in the list!\n", value);
//         return head;
//     }
    
//     struct Node* newNode = createNode(data);
//     newNode->next = temp->next;
//     newNode->prev = temp;
    
//     if (temp->next != NULL) {
//         temp->next->prev = newNode;
//     }
    
//     temp->next = newNode;
    
//     return head;
// }

// // Delete at the beginning
// struct Node* deleteAtBeginning(struct Node* head) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return NULL;
//     }
    
//     struct Node* temp = head;
//     head = head->next;
    
//     if (head != NULL) {
//         head->prev = NULL;
//     }
    
//     printf("Deleted: %d\n", temp->data);
//     free(temp);
    
//     return head;
// }

// // Delete at the end
// struct Node* deleteAtEnd(struct Node* head) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return NULL;
//     }
    
//     if (head->next == NULL) {
//         printf("Deleted: %d\n", head->data);
//         free(head);
//         return NULL;
//     }
    
//     struct Node* temp = head;
//     while (temp->next != NULL) {
//         temp = temp->next;
//     }
    
//     temp->prev->next = NULL;
//     printf("Deleted: %d\n", temp->data);
//     free(temp);
    
//     return head;
// }

// // Delete at a specific position (1-indexed)
// struct Node* deleteAtPosition(struct Node* head, int position) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return NULL;
//     }
    
//     if (position < 1) {
//         printf("Invalid position!\n");
//         return head;
//     }
    
//     if (position == 1) {
//         return deleteAtBeginning(head);
//     }
    
//     struct Node* temp = head;
//     int i;
//     for (i = 1; i < position && temp != NULL; i++) {
//         temp = temp->next;
//     }
    
//     if (temp == NULL) {
//         printf("Position out of bounds!\n");
//         return head; 
//     }
    
//     if (temp->prev != NULL) {
//         temp->prev->next = temp->next;
//     }
    
//     if (temp->next != NULL) {
//         temp->next->prev = temp->prev;
//     }
    
//     printf("Deleted: %d\n", temp->data);
//     free(temp);
    
//     return head;
// }

// // Delete after a specific value
// struct Node* deleteAfterValue(struct Node* head, int value) {
//     if (head == NULL) {
//         printf("List is empty!\n");
//         return head;
//     }
    
//     struct Node* temp = head;
    
//     while (temp != NULL && temp->data != value) {
//         temp = temp->next;
//     }
    
//     if (temp == NULL || temp->next == NULL) {
//         printf("Cannot delete: Value %d not found or no node after it!\n", value);
//         return head;
//     }
    
//     struct Node* nodeToDelete = temp->next;
//     temp->next = nodeToDelete->next;
    
//     if (nodeToDelete->next != NULL) {
//         nodeToDelete->next->prev = temp;
//     }
    
//     printf("Deleted: %d\n", nodeToDelete->data);
//     free(nodeToDelete);
    
//     return head;
// }

// // Main function with menu
// int main() {
//     struct Node* head = NULL;
//     int choice, data, position, value;
    
//     while (1) {
//         printf("\n===== DOUBLY LINKED LIST OPERATIONS =====\n");
//         printf("1.  Create List\n");
//         printf("2.  Traverse (Forward)\n");
//         printf("3.  Insert at Beginning\n");
//         printf("4.  Insert at End\n");
//         printf("5.  Insert at Position\n");
//         printf("6.  Insert After Value\n");
//         printf("7.  Delete at Beginning\n");
//         printf("8.  Delete at End\n");
//         printf("9.  Delete at Position\n");
//         printf("10. Delete After Value\n");
//         printf("11. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);
        
//         switch (choice) {
//             case 1:
//                 head = createList();
//                 break;
//             case 2:
//                 traverseForward(head);
//                 break;
//             case 3:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 head = insertAtBeginning(head, data);
//                 break;
//             case 4:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 head = insertAtEnd(head, data);
//                 break;
//             case 5:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 printf("Enter position: ");
//                 scanf("%d", &position);
//                 head = insertAtPosition(head, data, position);
//                 break;
//             case 6:
//                 printf("Enter data: ");
//                 scanf("%d", &data);
//                 printf("Enter value after which to insert: ");
//                 scanf("%d", &value);
//                 head = insertAfterValue(head, data, value);
//                 break;
//             case 7:
//                 head = deleteAtBeginning(head);
//                 break;
//             case 8:
//                 head = deleteAtEnd(head);
//                 break;
//             case 9:
//                 printf("Enter position: ");
//                 scanf("%d", &position);
//                 head = deleteAtPosition(head, position);
//                 break;
//             case 10:
//                 printf("Enter value after which to delete: ");
//                 scanf("%d", &value);
//                 head = deleteAfterValue(head, value);
//                 break;
//             case 11:
//                 printf("Exiting...\n");
//                 exit(0);
//             default:
//                 printf("Invalid choice!\n");
//         }
//     }
    
//     return 0;
// }