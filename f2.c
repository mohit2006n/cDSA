#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character : ");
    scanf("%c", &ch);
    if(ch >= 'A' && ch <= 'Z'){
        printf("It it upper case character.\n");
    } else if(ch >= 'a' && ch <= 'z'){
        printf("It it lower case character.\n");
    }else if(ch>='0' && ch<='9'){
        printf("It is number.\n");
    }else{
        printf("It it Special character.\n");
    }
    return 0;
}