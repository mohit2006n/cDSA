#include <stdio.h>

int main(){
    long sales, dis;
    printf("Enter the sales : ");
    scanf("%ld",&sales);
    // if(sales >= 10000){
    //     dis = (sales * 0.3);
    // }else if(sales >= 50000 && sales < 100000){
    //     dis = (sales * 0.2);
    // }else if(sales >= 10000 && sales < 50000){
    //     dis = (sales * 0.1);
    // }else if(sales >= 1000 && sales < 10000){
    //     dis = (sales * 0.02);
    // }else{
    //     dis = 5;
    // }

    if(sales > 1000){
        if(sales > 10000){
            if(sales > 50000){
                if(sales > 100000){
                    dis = (sales * 0.3);
                }else{
                    dis = (sales * 0.2);
                }
            }else{
                dis = (sales * 0.2);
            }
        }else{
            dis = (sales * 0.1);
        }
    }else{
        dis = 5;
    }
    
    printf("Discount values = %ld", dis);
    return 0;
}