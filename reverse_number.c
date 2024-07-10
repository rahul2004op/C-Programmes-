#include<stdio.h>

int main(){
    int num;
    printf("enter the number : ");
    scanf("%d",&num);
    int rn=0;
    while(num!=0){
        int rem = num % 10;
        rn=rn*10+rem;
        num= num/10;
    }
    printf("the reverse of number is:%d",rn);
    return 0;
}