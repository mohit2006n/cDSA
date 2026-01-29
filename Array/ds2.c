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

    printf("Enter the index postion at which you want to delete an element: ");
    scanf("%d", &pos);

    for (i = 0; i < 10; i++) {
        if(i >= pos)
            arr[i] = arr[i + 1];
    }

    arr = (int *)realloc(arr, 9 * sizeof(int));

    for(i=0;i<9;i++){
        printf("%d ",arr[i]);
    }   

    return 0;
}