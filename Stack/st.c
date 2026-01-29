// Stack in arrary
// 1. peep
// 2. push
// 3. pop

#include <stdio.h>
#include <stdlib.h>

#define  MAX 10

int stack[MAX] = {0};
int tos = -1;

void peep(){
    if (tos == -1) {
        printf("Stack is empty.\n");
    }else {
        printf("Top element: %d\n", stack[tos]);
    }
    printf("\n");
}

void push(int val) {
    printf("Enter value to push: ");
    scanf("%d", &val);
    if (tos >= MAX - 1) {
        printf("Stack is full......\n");
    }else{
        stack[++tos] = val;
    }
    printf("\n");
}

void pop() {
    if(tos == -1) {
        printf("Stack is Empty.....\n");
    }else{
        printf("Popped element is %d \n", stack[tos--]);
    }
    printf("\n");
}

void display(){
    int i = 0;
    for(i = 0; i <= tos; i++){
        printf("%d  ", stack[i]);
    }
    printf("\n");
}

int main(){
    int val;
    int ch = 0;
    printf("\n--- MENU ---\n");
    printf("1. PEEP\n");
    printf("2. PUSH\n");
    printf("3. POP\n");
    printf("4. DISPLAY\n");
    printf("5. EXIT\n");

    while (1) {
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch){
            case 1:
                peep();
                break;
            case 2:
                push(val);
                break;
            case 3:
                pop();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invaild choose");
            }
            
    }
    return 0;
}

