#include <stdio.h>

int main(){
    int s, i;
    int arr[10];
    printf("Enter the array elements: ");
    for(int i = 0; i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the elements you want to search: ");
    scanf("%d",&s);
    int t, f = 0;
    for(int i = 0; i<10;i++){
        if(arr[i] == s){
            f = 1;
            t = i+1;
            break;
        }
    }
    if (f==1){
        printf("%d is present at %d",s,t);
    }else{
        printf("%d is not present",s);
    }
}