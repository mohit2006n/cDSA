#include <stdio.h>

int main(){
    int a, b, c;
    printf("Enter any 3 numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("Large = %d\n",a);
        else
            printf("Large = %d\n",c);
    }else{
        if(b>c)
            printf("Large = %d\n",b);
        else
            printf("Large = %d\n",c);
    }
    return 0;
}