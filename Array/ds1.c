#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, in ,pos;
    int *arr;

    arr = (int *)malloc(10 * sizeof(int));

    printf("Enter the 10 elements: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the postion at which you want to insert an element: ");
    scanf("%d", &in);
    printf("Enter the element at which you want to insert an element: ");
    scanf("%d", &arr[in]);

    arr = (int *)realloc(arr, 11 * sizeof(int));
    
    for (i = 10; i > in; i--) {
        if(i>in)
        arr[i] = arr[i - 1];
        if(i==in)
        arr[i]=arr[in];
    }

    for(i=0;i<11;i++){
        printf("%d ",arr[i]);
    }   

    return 0;
}