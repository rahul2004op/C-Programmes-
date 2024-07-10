#include<stdio.h>

int sum (int a, int b);

int sum(int x,int y){
    return x+y;
}
int main (){
    int a,b;
    printf("enter the first number :");
    scanf("%d",&a);
    printf("enter the secont number :");
    scanf("%d",&b);

    int s =sum(a,b);
    printf("the sum is %d",s);
    return 0;
}