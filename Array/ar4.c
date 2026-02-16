#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, n;
    int *arr;

    arr = (int *)malloc(10 * sizeof(int));

    printf("Enter yout phone number: ");
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

    if(arr[0]>0){
        n = 100*arr[0] + 10*arr[1] + arr[2];
        printf("The smallest 3 digit number possible is %d",n);

    }
    else{
        for(i=1;i<10;i++){
            if(arr[i]>0){
                arr[0]=arr[i];
                arr[i]=0;
                break;
            }
        }
        n = 100*arr[0] + 10*arr[1] + arr[2];
        printf("The smallest 3 digit number possible is %d",n);
    }
    ;


    return 0;
}