// #include <stdio.h>

// int main(){
//     int A[10] = {55,90,10,34,77,-81,25,80,-22,7};
//     printf("Array elements: ");
//     int od, sod, ev, sev, po, ng;
//     for (int i=0; i<10; i++){
//         if(A[i]%2==0){
//             sev = ev + A[i];
//             ev++;
//         }
//         if (A[i] == 1){
//             sod = od + A[i];
//             od++;
//         }
//         if (A[i]<0){
//             ng++;
//         }
//         if (A[i]>0){
//             po++;
//         }
        

//     }
//     printf(" %d\n", po);
//     printf(" %d\n", ng);
//     printf(" %d\n", od);
//     printf(" %d\n", ev);
//     printf(" %d\n", sev);
//     printf(" %d\n", sod);
//     return 0;
// }




#include <stdio.h>

int main(){
    int mat[5][5];
    int i,j;
    printf("Matrix elemets are: \n");
    for (int i = 0; i<5; i++){
        for (int j = 0; j<5; j++){
            scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}