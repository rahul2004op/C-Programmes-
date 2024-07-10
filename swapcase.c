#include<stdio.h>

int main (){
    int a = 12;
    int b = 30;
    printf("a = %d\nb=%d",a,b);
    int temp=a;
    a =b;
    b=temp;

    printf("\nswap: a=%d\n\tb=%d",a,b);
    return 0;
}