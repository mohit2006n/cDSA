#include <stdio.h>
#include <string.h>

int main(){
    // char email[50];
    // printf("Enter you email: ");
    // scanf("%s",email);
    // if(strchr(email,'@')&& strchr(email,'.')){
    //     printf("Vaild email format.\n");
    // }else{
    //     printf("Invalid email format.\n");
    // }

    char firstName[30], lastName[30], fullName[100];
    printf("Enter first Name : ");
    scanf("%s", firstName);
    printf("Enter last Name : ");
    scanf("%s", lastName);
    strcpy(fullName, firstName);
    strcat(fullName, " ");
    strcat(fullName, lastName);
    printf("Full name: %s\n", fullName);
    return 0;
}