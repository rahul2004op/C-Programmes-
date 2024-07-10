#include<stdio.h>
int main() {
    printf("Hello World");

    printf("Welcome to C \n");
    
    int x;
    printf("enter the number");
    scanf("%d",&x);
    x<100 ? printf("the number is 2 digit number") : printf("the number is not 2 digit number");
    return 0;
}