#include<stdio.h>

int main(){
    int a=15;
    int b = 43;

    printf("a = %d\n",a);
    printf("b = %d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    

    printf("swap:\na=%d\nb=%d\n",a,b);
    return 0;

}