#include<stdio.h>

int fact(int n);

int fact(int n){
    if (n==0){
        return 1; 
    }

    int factNM1=fact(n-1);
    int factNM = factNM1 * n;
    return factNM;
}

int main (){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the factirial is :%d\n",fact(n));
    return 0; 
}