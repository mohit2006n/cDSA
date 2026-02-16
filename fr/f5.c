#include <stdio.h>

// int main(){
//     int i, sum = 0;
//     for (i=0; i<=10; i++){
//         printf("%d\n",i);
//         sum += i;
//     }
//     printf("Sum of 1 to 10 = %d\n", sum);
// }

int main(){
    int i,j;


    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }

    printf("\n\n");
    
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}