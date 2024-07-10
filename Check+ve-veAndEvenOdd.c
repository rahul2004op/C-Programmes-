#include<stdio.h>
int main(){
    int number;
    printf("enter the number:");
    scanf("%d",&number);
    if(number>=0){
        printf("the number is positive \n");
        if(number%2==0){
            printf("the number is an even number");
        }
        else{
            printf("the number is odd");
        }

    }
    else{
        printf("the number is negative");
    }
}