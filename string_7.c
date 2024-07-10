#include<stdio.h>
#include<string.h>
// FIND THE SALTED FORM OF A PASSWORD ENTERED BY THE USER THE SALT IS "@123" AND ADDED AT THE END.
 
void salting(char password[]);
void salting(char password[]){
    char salt[]="@123";
    char newpass[100];

    strcpy(newpass,password);
    strcat(newpass,salt);
    puts(newpass);
}

int main(){
    char password[100];
    printf("enter the string :");
    scanf("%s",password);
    printf("\nthe new password is ");
    salting(password);
    return 0;
} 
