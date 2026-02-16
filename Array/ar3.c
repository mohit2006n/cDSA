#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    int *arr;

    arr = (int *)malloc(10 * sizeof(int));

    printf("Enter the 10 elements: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    int m;

    for (i = 0; i < 10 - 1; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                m = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = m;
            }
        }
    }


    

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}